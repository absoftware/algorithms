//
//  TriangleTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#import <XCTest/XCTest.h>
#import "Triangle.hpp"
#import <limits>

using namespace std;

@interface TriangleTests : XCTestCase

@end

@implementation TriangleTests

- (void)testEmpty {
    vector<int> input;
    XCTAssertEqual(0, codility_triangle(input));
}

- (void)testExample {
    vector<int> input { 10, 2, 5, 1, 8, 20 };
    XCTAssertEqual(1, codility_triangle(input));
}

- (void)testExampleZero {
    vector<int> input { 10, 50, 5, 1 };
    XCTAssertEqual(0, codility_triangle(input));
}

- (void)testMax {
    int max = numeric_limits<int>::max();
    vector<int> input { -max, 10, 50, 5, 1, max, max, max };
    XCTAssertEqual(1, codility_triangle(input));
}

@end
