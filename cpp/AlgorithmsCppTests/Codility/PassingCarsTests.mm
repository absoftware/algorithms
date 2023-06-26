//
//  PassingCarsTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "PassingCars.hpp"

using namespace std;

@interface PassingCarsTests : XCTestCase

@end

@implementation PassingCarsTests

- (void)testZero {
    vector<int> input;
    XCTAssertEqual(0, codility_passing_cars(input));
}

- (void)testZero0 {
    vector<int> input { 0 };
    XCTAssertEqual(0, codility_passing_cars(input));
}

- (void)testZero1 {
    vector<int> input { 1 };
    XCTAssertEqual(0, codility_passing_cars(input));
}

- (void)testZero10 {
    vector<int> input { 1, 0 };
    XCTAssertEqual(0, codility_passing_cars(input));
}

- (void)testZero1100 {
    vector<int> input { 1, 1, 0, 0 };
    XCTAssertEqual(0, codility_passing_cars(input));
}

- (void)testOne {
    vector<int> input { 0, 1 };
    XCTAssertEqual(1, codility_passing_cars(input));
}

- (void)testExample {
    vector<int> input { 0, 1, 0, 1, 1 };
    XCTAssertEqual(5, codility_passing_cars(input));
}

@end
