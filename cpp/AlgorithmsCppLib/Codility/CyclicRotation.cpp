//
//  CyclicRotation.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#include "CyclicRotation.hpp"
#include <stdlib.h>

using namespace std;

vector<int> codility_cyclic_rotation(vector<int> &A, int K) {
    vector<int> rotated(A);
    if (A.size() == 0) {
        return rotated;
    }

    int size = (int)A.size();
    int offset = K % A.size();
    for (int i = 0; i < size; i++) {
        int srcIndex = (i - offset < 0) ? size - offset + i : i - offset;
        rotated[i] = A[srcIndex];
    }

    return rotated;
}
