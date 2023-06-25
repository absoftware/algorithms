//
//  PermCheck.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "PermCheck.hpp"
#include <unordered_set>

using namespace std;

int codility_perm_check(vector<int> &A) {
    if (A.size() < 1 || A.size() > 100000) {
        return -1;
    }

    unordered_set<int> elements;
    for (unsigned int i = 0; i < A.size(); i++) {
        if (A[i] < 1 || A[i] > (int)A.size()) {
            return 0;
        }
        if (elements.find(A[i]) != elements.end()) {
            return 0;
        }
        elements.insert(A[i]);
    }

    return elements.size() == A.size() ? 1 : 0;
}
