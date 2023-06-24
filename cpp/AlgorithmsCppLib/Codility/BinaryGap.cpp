//
//  BinaryGap.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#include "BinaryGap.hpp"

int codility_binary_gap(int N) {
    bool hasOnes = false;
    int currentGapLenght = 0;
    int maxGapLenght = 0;

    // Iterate over bits
    int numberOfBits = sizeof(N)*8;
    for (int i = 0; i < numberOfBits; i++) {
        // We have 1 at index i
        if (N & (1 << i)) {
            // Mark that we reached at least one 1
            hasOnes = true;
            // Close the gap if any
            if (currentGapLenght > maxGapLenght) {
                maxGapLenght = currentGapLenght;
            }
            // Reset current gap
            currentGapLenght = 0;
        }
        // We have 0 at index i
        else {
            // Skip all leading zeros
            if (!hasOnes) {
                continue;
            }
            // Increase current gap length
            currentGapLenght++;
        }
    }

    return maxGapLenght;
}
