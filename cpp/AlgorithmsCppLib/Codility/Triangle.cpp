//
//  Triangle.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#include "Triangle.hpp"
#include <algorithm>

using namespace std;

int codility_triangle(vector<int> &A) {
    vector<int> sorted(A);
    sort(sorted.begin(), sorted.end());

    for (unsigned int i = 2; i < sorted.size(); i++) {
        long long p = sorted[i];
        long long q = sorted[i - 1];
        long long r = sorted[i - 2];
        if (p < q + r &&
            q < p + r &&
            r < p + q) {
            return 1;
        }
    }

    return 0;
}
