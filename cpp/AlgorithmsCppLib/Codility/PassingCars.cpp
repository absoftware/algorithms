//
//  PassingCars.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "PassingCars.hpp"

using namespace std;

#define MAX_PASSINGS 1000000000

int codility_passing_cars(vector<int> &A) {
    if (A.size() < 2) {
        return 0;
    }

    int currentZeros = 0;
    int currentSum = 0;
    for (unsigned int i = 0; i < A.size(); i++) {
        // We meet car going west (1)
        if (A[i] > 0) {
            // Increment current sum, every single 1 multiplied by number of zeros
            currentSum += currentZeros;
            if (currentSum > MAX_PASSINGS) {
                return -1;
            }
        }

        // We meet car going east (0)
        else {
            // Increment number of cars passed to east
            currentZeros += 1;
        }
    }

    return currentSum;
}
