//
//  MaxProductOfThree.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#include "MaxProductOfThree.hpp"
#include <algorithm>
#include <limits>

using namespace std;

int codility_max_product_of_three(vector<int> &A) {
    // Sort input array
    vector<int> sorted(A);
    sort(sorted.begin(), sorted.end());

    vector<int> extremes;

    // Take 3 the smallest elements
    for (int i = 0; i < 3 && i < (int)sorted.size(); i++) {
        extremes.push_back(sorted[i]);
    }

    // Take 3 the biggest elements
    for (int i = (int)sorted.size() - 1; i >= 3 && i >= (int)sorted.size() - 3; i--) {
        extremes.push_back(sorted[i]);
    }

    int maximumProduct = numeric_limits<int>::min();
    for (unsigned int i = 0; i < extremes.size(); i++) {
        for (unsigned int j = i + 1; j < extremes.size(); j++) {
            for (unsigned int k = j + 1; k < extremes.size(); k++) {
                int product = extremes[i]*extremes[j]*extremes[k];
                if (product > maximumProduct) {
                    maximumProduct = product;
                }
            }
        }
    }

    return maximumProduct;
}
