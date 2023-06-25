//
//  MissingIntegerTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "MissingInteger.hpp"

using namespace std;

@interface MissingIntegerTests : XCTestCase

@end

@implementation MissingIntegerTests

- (void)testExample1 {
    vector<int> input { 1, 3, 6, 4, 1, 2 };
    XCTAssertEqual(5, codility_missing_integer(input));
}

- (void)testExample2 {
    vector<int> input { 1, 2, 3 };
    XCTAssertEqual(4, codility_missing_integer(input));
}

- (void)testExample3 {
    vector<int> input { -1, -3 };
    XCTAssertEqual(1, codility_missing_integer(input));
}

@end
