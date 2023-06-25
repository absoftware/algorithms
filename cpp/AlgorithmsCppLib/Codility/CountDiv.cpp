//
//  CountDiv.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "CountDiv.hpp"

#define MAX_VALUE 2000000000

int codility_count_div(int A, int B, int K) {
    if (A < 0 || A > MAX_VALUE) {
        return -1;
    }

    if (B < 0 || B > MAX_VALUE) {
        return -1;
    }

    if (A > B) {
        return -1;
    }

    if (K < 1 || K > MAX_VALUE) {
        return -1;
    }

    int aMod = A % K;
    if (aMod > 0) {
        A = A + (K - aMod);
    }

    if (A > B) {
        return 0;
    }

    return (B - A)/K + 1;
}
