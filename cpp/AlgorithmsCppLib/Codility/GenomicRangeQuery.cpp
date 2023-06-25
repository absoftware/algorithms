//
//  GenomicRangeQuery.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "GenomicRangeQuery.hpp"
#include <unordered_map>

using namespace std;

#define BINARY_OPTIMIZATION
#ifdef BINARY_OPTIMIZATION

int findNearestGreaterPow2(int value) {
    int pow = 0;
    while ((1 << pow) < value) {
        pow++;
        if (pow >= sizeof(int)*8) {
            return -1;
        }
    }
    return pow;
}

int findMinimum(int p, int q, int pow, unordered_map<int, vector<int>> &mapping, int globalMinimum) {
    if (p > q) {
        return 5;
    }

    if (p == q) {
        return mapping[pow][p];
    }

    int factor = 5;
    bool incrementP = false;
    if ((p % 2) > 0) {
        incrementP = true;
        factor = min(mapping[pow][p], factor);
        if (factor <= globalMinimum) {
            return factor;
        }
    }

    bool decrementQ = false;
    if ((q % 2) == 0) {
        decrementQ = true;
        factor = min(mapping[pow][q], factor);
        if (factor <= globalMinimum) {
            return factor;
        }
    }

    if (incrementP && decrementQ) {
        factor = min(findMinimum((p + 1)/2, (q - 1)/2, pow - 1, mapping, globalMinimum), factor);
    } else if (incrementP) {
        factor = min(findMinimum((p + 1)/2, q/2, pow - 1, mapping, globalMinimum), factor);
    } else if (decrementQ) {
        factor = min(findMinimum(p/2, (q - 1)/2, pow - 1, mapping, globalMinimum), factor);
    } else {
        factor = min(findMinimum(p/2, q/2, pow - 1, mapping, globalMinimum), factor);
    }

    return factor;
}

#endif

vector<int> codility_genomic_range_query(const string &S, vector<int> &P, vector<int> &Q) {
    int N = (int)S.length();
    if (N < 1 || N > 100000) {
        return vector<int>();
    }

    int M = (int)P.size();
    if (M < 1 || M > 50000 || M != (int)Q.size()) {
        return vector<int>();
    }

    // Filter out repeating factors, it converts S -> factors, indexMap(S -> factors)
    vector<int> factors;
    unordered_map<int, int> indexMap;
    int previousFactor = 0;
    int globalMinimumFactor = 5;
    for (unsigned int i = 0; i < S.length(); i++) {
        int factor = 0;
        switch (S[i]) {
            case 'A':
                factor = 1;
                break;
            case 'C':
                factor = 2;
                break;
            case 'G':
                factor = 3;
                break;
            case 'T':
                factor = 4;
                break;
            default:
                return vector<int>();
        }

        if (previousFactor == factor) {
            indexMap.insert({i, factors.size() - 1});
            continue;
        }

        factors.push_back(factor);
        previousFactor = factor;
        indexMap.insert({i, factors.size() - 1});
        if (globalMinimumFactor > factor) {
            globalMinimumFactor = factor;
        }
    }

#ifdef BINARY_OPTIMIZATION
    int pow = findNearestGreaterPow2((int)factors.size());
    unordered_map<int, vector<int>> scaling;
    vector<int> previousScale(1 << pow);
    for (unsigned int i = 0; i < (1 << pow); i++) {
        if (i < factors.size()) {
            previousScale[i] = factors[i];
        } else {
            previousScale[i] = 5;
        }
    }
    scaling[pow] = previousScale;
    for (int p = pow - 1; p >= 0; p--) {
        vector<int> scale(1 << p, 5);
        for (int s = 0; s < (int)previousScale.size(); s++) {
            int scaleIndex = s/2;
            int factor = previousScale[s];
            int scaleFactor = scale[scaleIndex];
            if (factor < scaleFactor) {
                scale[scaleIndex] = factor;
            }
        }
        scaling[p] = scale;
        previousScale = scale;
    }
#endif

    vector<int> result(M, 0);
    for (int k = 0; k < M; k++) {
        int indexP = indexMap[P[k]];
        int indexQ = indexMap[Q[k]];

        if (indexP < 0 || indexP >= (int)factors.size()) {
            return vector<int>();
        }

        if (indexQ < 0 || indexQ >= (int)factors.size() || indexQ < indexP) {
            return vector<int>();
        }

#ifdef BINARY_OPTIMIZATION
        int minimumFactor = findMinimum(indexP, indexQ, pow, scaling, globalMinimumFactor);
#else
        int minimumFactor = 5;
        for (int m = indexP; m <= indexQ; m++) {
            int factor = factors[m];
            if (minimumFactor > factor) {
                minimumFactor = factor;
                if (minimumFactor <= globalMinimumFactor) {
                    break;
                }
            }
        }
#endif

        result[k] = minimumFactor;
    }

    return result;
}
