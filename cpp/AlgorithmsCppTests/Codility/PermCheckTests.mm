//
//  PermCheckTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "PermCheck.hpp"

using namespace std;

@interface PermCheckTests : XCTestCase

@end

@implementation PermCheckTests

- (void)testInvalid {
    vector<int> input;
    XCTAssertEqual(-1, codility_perm_check(input));
}

- (void)testNoPerm {
    vector<int> input { 4, 12, 3, 2 };
    XCTAssertEqual(0, codility_perm_check(input));
}

- (void)testPerm {
    vector<int> input { 4, 1, 3, 2 };
    XCTAssertEqual(1, codility_perm_check(input));
}

@end
