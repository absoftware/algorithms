//
//  PermMissingElemTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#import <XCTest/XCTest.h>
#import "PermMissingElem.hpp"

using namespace std;

vector<int> createDistinctArrayExceptAsc(int size, int except) {
    if (size < 0) {
        return vector<int>();
    }

    vector<int> result(size);
    for (int i = 1; i <= size + 1; i++) {
        if (i < except) {
            result[i - 1] = i;
        } else if (i > except) {
            result[i - 2] = i;
        }
    }

    return result;
}

vector<int> createDistinctArrayExceptDesc(int size, int except) {
    if (size < 0) {
        return vector<int>();
    }

    vector<int> result(size);
    for (int i = 1; i <= size + 1; i++) {
        int value = size + 2 - i;
        if (value > except) {
            result[i - 1] = value;
        } else if (value < except) {
            result[i - 2] = value;
        }
    }

    return result;
}

@interface PermMissingElemTests : XCTestCase

@end

@implementation PermMissingElemTests

- (void)testZero {
    vector<int> input;
    XCTAssertEqual(1, codility_perm_missing_elem(input));
}

- (void)testExample1 {
    vector<int> input { 2, 3, 1, 5 };
    XCTAssertEqual(4, codility_perm_missing_elem(input));
}

- (void)testExample2 {
    vector<int> input { 2, 3, 1, 5, 10, 9, 6, 7, 8 };
    XCTAssertEqual(4, codility_perm_missing_elem(input));
}

- (void)testBig1Asc {
    int expected = 1;
    int limit = 100000;
    vector<int> input = createDistinctArrayExceptAsc(limit, expected);
    XCTAssertEqual(expected, codility_perm_missing_elem(input));
}

- (void)testBig1Desc {
    int expected = 1;
    int limit = 100000;
    vector<int> input = createDistinctArrayExceptDesc(limit, expected);
    XCTAssertEqual(expected, codility_perm_missing_elem(input));
}

- (void)testBig10001Asc {
    int expected = 10001;
    int limit = 100000;
    vector<int> input = createDistinctArrayExceptAsc(limit, expected);
    XCTAssertEqual(expected, codility_perm_missing_elem(input));
}

- (void)testBig10001Desc {
    int expected = 10001;
    int limit = 100000;
    vector<int> input = createDistinctArrayExceptDesc(limit, expected);
    XCTAssertEqual(expected, codility_perm_missing_elem(input));
}

@end
