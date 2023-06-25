//
//  MaxCounters.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "MaxCounters.hpp"

using namespace std;

vector<int> codility_max_counters(int N, vector<int> &A) {
    if (N < 1 || N > 100000) {
        return vector<int>();
    }

    if (A.size() < 1 || A.size() > 100000) {
        return vector<int>();
    }

    vector<int> counters(N, 0);
    int appliedMaxCounter = 0;
    int currentMaxCounter = 0;
    for (unsigned int i = 0; i < A.size(); i++) {
        // Get index of counter
        int X = A[i] - 1;

        // Validation just in case according to the task description
        if (X < 0 || X > N) {
            return vector<int>();
        }

        // Apply current max counter
        if (X >= N) {
            appliedMaxCounter = currentMaxCounter;
        }

        // Increment value for single counter
        else {

            // Increment value respecting applied max counter
            if (counters[X] < appliedMaxCounter) {
                counters[X] = appliedMaxCounter + 1;
            } else {
                counters[X] = counters[X] + 1;
            }

            // Calculate current max counter
            if (counters[X] > currentMaxCounter) {
                currentMaxCounter = counters[X];
            }
        }
    }

    // Apply max counter to all counters
    for (unsigned int x = 0; x < counters.size(); x++) {
        if (counters[x] < appliedMaxCounter) {
            counters[x] = appliedMaxCounter;
        }
    }

    return counters;
}
