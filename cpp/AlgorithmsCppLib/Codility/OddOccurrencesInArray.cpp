//
//  OddOccurrencesInArray.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#include "OddOccurrencesInArray.hpp"
#include <unordered_set>

using namespace std;

int codility_odd_occurrences_in_array(vector<int> &A) {
    unordered_set<int> result;

    for (unsigned int i = 0; i < A.size(); i++) {
        int N = A[i];
        if (result.find(N) != result.end()) {
            result.erase(N);
        } else {
            result.insert(N);
        }
    }

    return result.size() > 0 ? *(result.begin()) : -1;
}
