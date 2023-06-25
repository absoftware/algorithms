//
//  MinAvgTwoSliceTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "MinAvgTwoSlice.hpp"

using namespace std;

@interface MinAvgTwoSliceTests : XCTestCase

@end

@implementation MinAvgTwoSliceTests

- (void)testExample {
    vector<int> input { 4, 2, 2, 5, 1, 5, 8 };
    XCTAssertEqual(1, codility_min_avg_two_slice(input));
}

- (void)testExampleTricky1 {
    vector<int> input { 140, -8, 4, 4, 1000, -10000, 1200 };
    XCTAssertEqual(4, codility_min_avg_two_slice(input));
}

- (void)testExampleTricky2 {
    vector<int> input { 140, -8, 4, -10000, 3, -10000, 1200 };
    XCTAssertEqual(3, codility_min_avg_two_slice(input));
}

- (void)testExampleTricky3 {
    vector<int> input { 2, 10, 13, 1 };
    XCTAssertEqual(0, codility_min_avg_two_slice(input));
}

- (void)testExampleTricky4A {
    vector<int> input { 1, 9, 10, 1 };
    XCTAssertEqual(0, codility_min_avg_two_slice(input));
}

- (void)testExampleTricky4B {
    vector<int> input { 1, 10, 9, 1 };
    XCTAssertEqual(2, codility_min_avg_two_slice(input));
}

/// Link to the comment:
/// https://codesays.com/2014/solution-to-min-avg-two-slice-by-codility/#comment-1132
- (void)testFromCodesayComment {
    vector<int> input { -1, -2, -3, -4, -5, -6, 11, -42, 200, 0, -10, -10, -10, -10, -10, -1000 };
    XCTAssertEqual(14, codility_min_avg_two_slice(input));
}

- (void)testBigOnes {
    [self measureBlock:^{
        vector<int> input(100000, 0);
        for (unsigned int i = 0; i < input.size(); i++) {
            input[i] = (i % 2) ? 1 : -1;
        }
        XCTAssertEqual(0, ::codility_min_avg_two_slice(input));
    }];
}

@end
