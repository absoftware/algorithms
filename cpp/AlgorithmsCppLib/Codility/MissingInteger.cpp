//
//  MissingInteger.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#include "MissingInteger.hpp"
#include <unordered_set>

using namespace std;

int codility_missing_integer(vector<int> &A) {
    if (A.size() < 1 || A.size() > 100000) {
        return -1;
    }

    unordered_set<int> cache;
    for (unsigned int i = 0; i < A.size(); i++) {
        if (A[i] > 0 && cache.find(A[i]) == cache.end()) {
            cache.insert(A[i]);
        }
    }

    int result = 1;
    while (cache.find(result) != cache.end()) {
        result++;
    }

    return result;
}
