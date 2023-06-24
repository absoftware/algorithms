//
//  CyclicRotationTests.m
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#import <XCTest/XCTest.h>
#import "CyclicRotation.hpp"

using namespace std;

@interface CyclicRotationTests : XCTestCase

@end

@implementation CyclicRotationTests

- (void)test0 {
    vector<int> input;
    vector<int> expected;
    XCTAssertEqual(expected, codility_cyclic_rotation(input, 140));
}

- (void)test1 {
    vector<int> input { 0 };
    vector<int> expected { 0 };
    XCTAssertEqual(expected, codility_cyclic_rotation(input, 140));
}

- (void)test2 {
    vector<int> input { 0, 1 };
    vector<int> expected { 1, 0 };
    XCTAssertEqual(expected, codility_cyclic_rotation(input, 1));
}

- (void)testMinus2 {
    vector<int> input { 0, 1 };
    vector<int> expected { 1, 0 };
    XCTAssertEqual(expected, codility_cyclic_rotation(input, -1));
}

- (void)test3 {
    vector<int> input { 3, 8, 9, 7, 6 };
    vector<int> expected { 9, 7, 6, 3, 8 };
    XCTAssertEqual(expected, codility_cyclic_rotation(input, 3));
}

- (void)testZeros {
    vector<int> input { 0, 0, 0 };
    vector<int> expected { 0, 0, 0 };
    XCTAssertEqual(expected, codility_cyclic_rotation(input, 1));
}

- (void)test1234 {
    vector<int> input { 1, 2, 3, 4 };
    vector<int> expected { 1, 2, 3, 4 };
    XCTAssertEqual(expected, codility_cyclic_rotation(input, 4));
}

@end
