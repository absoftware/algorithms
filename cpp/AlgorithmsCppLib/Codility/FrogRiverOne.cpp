//
//  FrogRiverOne.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "FrogRiverOne.hpp"
#include <unordered_set>

using namespace std;

int codility_frog_river_one(int X, vector<int> &A) {
    if (X < 1 || X > 100000) {
        return -1;
    }

    if (A.size() < 1 || A.size() > 100000) {
        return -1;
    }

    // Each element of an array is [1..X]
    unordered_set<int> elements;
    for (unsigned int i = 0; i < A.size(); i++) {
        if (A[i] <= X && elements.find(A[i]) == elements.end()) {
            elements.insert(A[i]);
            if ((int)elements.size() == X) {
                return (int)i;
            }
        }
    }

    return -1;
}
