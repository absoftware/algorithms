//
//  BinaryGapTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#import <XCTest/XCTest.h>
#import "BinaryGap.hpp"

@interface BinaryGapTests : XCTestCase

@end

@implementation BinaryGapTests

- (void)test0 {
    XCTAssertEqual(0, codility_binary_gap(0));
}

- (void)test9 {
    XCTAssertEqual(2, codility_binary_gap(9));
}

- (void)test15 {
    XCTAssertEqual(0, codility_binary_gap(15));
}

- (void)test20 {
    XCTAssertEqual(1, codility_binary_gap(20));
}

- (void)test32 {
    XCTAssertEqual(0, codility_binary_gap(32));
}

- (void)test529 {
    XCTAssertEqual(4, codility_binary_gap(529));
}

- (void)test1041 {
    XCTAssertEqual(5, codility_binary_gap(1041));
}

- (void)test2147483647 {
    XCTAssertEqual(0, codility_binary_gap(2147483647));
}

- (void)testMinus2147483647 {
    XCTAssertEqual(30, codility_binary_gap(-2147483647));
}

@end
