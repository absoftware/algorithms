//
//  TapeEquilibrium.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "TapeEquilibrium.hpp"
#include <limits.h>

using namespace std;

int codility_tape_equilibrium(vector<int> &A) {
    if (A.size() < 2) {
        return -1;
    }

    vector<int> sums(A.size(), 0);
    int sumTotal = 0;
    for (unsigned int i = 0; i < A.size(); i++) {
        sums[i] = i > 0 ? sums[i - 1] + A[i] : A[i];
        sumTotal += A[i];
    }

    int minimumDiff = INT_MAX;
    for (unsigned int p = 1; p < A.size(); p++) {
        int part1 = sums[p - 1];
        int part2 = sumTotal - part1;
        int absoluteDiff = abs(part1 - part2);
        if (absoluteDiff < minimumDiff) {
            minimumDiff = absoluteDiff;
        }
    }

    return minimumDiff;
}
