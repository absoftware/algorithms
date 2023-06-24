//
//  FrogJmp.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#include "FrogJmp.hpp"

#define MAX_SIZE 1000000000

int codility_frog_jmp(int X, int Y, int D) {
    if (X > Y) {
        return -1;
    }

    if (X < 1 || Y < 1 || D < 1) {
        return -1;
    }

    if (X > MAX_SIZE || Y > MAX_SIZE || D > MAX_SIZE) {
        return -1;
    }

    int jumpsCount = (Y - X)/D;
    if (((Y - X) % D) > 0) {
        jumpsCount++;
    }

    return jumpsCount;
}
