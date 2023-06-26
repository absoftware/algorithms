//
//  Distinct.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#include "Distinct.hpp"
#include <unordered_set>

using namespace std;

int codility_distinct(vector<int> &A) {
    unordered_set<int> unique;
    for (unsigned int i = 0; i < A.size(); i++) {
        unique.insert(A[i]);
    }
    return (int)unique.size();
}
