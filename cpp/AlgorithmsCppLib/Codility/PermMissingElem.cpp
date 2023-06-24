//
//  PermMissingElem.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#include "PermMissingElem.hpp"

using namespace std;

int codility_perm_missing_elem(vector<int> &A) {
    int N = (int)A.size();
    if (N < 0 || N > 100000) {
        return -1;
    }

    int sumCurrent = N + 1;
    for (int i = 0; i < N; i++) {
        sumCurrent += i + 1 - A[i];
    }

    return sumCurrent;
}
