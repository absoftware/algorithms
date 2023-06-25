//
//  CountDivTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "CountDiv.hpp"

@interface CountDivTests : XCTestCase

@end

@implementation CountDivTests

- (void)testK2Result3 {
    XCTAssertEqual(3, codility_count_div(6, 11, 2));
}

- (void)testK3Result2 {
    XCTAssertEqual(2, codility_count_div(6, 11, 3));
}

- (void)testK3Result3A {
    XCTAssertEqual(3, codility_count_div(6, 12, 3));
}

- (void)testK3Result3B {
    XCTAssertEqual(3, codility_count_div(6, 13, 3));
}

- (void)testK4Result1 {
    XCTAssertEqual(1, codility_count_div(6, 11, 4));
}

- (void)testK4Result2A {
    XCTAssertEqual(2, codility_count_div(6, 12, 4));
}

- (void)testK4Result2B {
    XCTAssertEqual(2, codility_count_div(6, 13, 4));
}

- (void)testK5Result1 {
    XCTAssertEqual(1, codility_count_div(6, 11, 5));
}

- (void)testK11Result0 {
    XCTAssertEqual(1, codility_count_div(0, 1, 11));
}

- (void)testK20Result0 {
    XCTAssertEqual(0, codility_count_div(5, 7, 20));
}

@end
