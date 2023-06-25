//
//  MinAvgTwoSlice.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//
//  Check explanation (crazy task):
//  https://codesays.com/2014/solution-to-min-avg-two-slice-by-codility/
//
//  "We are NOT proving that, 4-or-more-element slices
//  cannot have the global minimal average.
//  We just proved that, there MUST be some 2-element
//  and/or 3-element slices, having the global minimal
//  average. In other words, we are NOT SURE whether
//  there are some 4-or-more-element slices holding global
//  minimal average. But we are ONE HUNDRED PERCENT SURE
//  about the 2-element and/or 3-element slices."
//

#include "MinAvgTwoSlice.hpp"
#include <limits>

using namespace std;

int codility_min_avg_two_slice(vector<int> &A) {
    if (A.size() < 2 || A.size() > 100000) {
        return -1;
    }

    // It must not be float:
    // https://codesays.com/2014/solution-to-min-avg-two-slice-by-codility/#comment-1085
    double minAvg = (A[0] + A[1])/2.0;
    int minPos = 0;

    for (unsigned int i = 0; i < A.size() - 2; i++) {
        if ((A[i] + A[i + 1])/2.0 < minAvg) {
            minAvg = (A[i] + A[i + 1])/2.0;
            minPos = i;
        }
        if ((A[i] + A[i + 1] + A[i + 2])/3.0 < minAvg) {
            minAvg = (A[i] + A[i + 1] + A[i + 2])/3.0;
            minPos = i;
        }
    }

    if ((A[A.size() - 1] + A[A.size() - 2])/2.0 < minAvg) {
        minAvg = (A[A.size() - 1] + A[A.size() - 2])/2.0;
        minPos = (int)A.size() - 2;
    }

    return minPos;
}
