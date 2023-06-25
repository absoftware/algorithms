//
//  PassingCars.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "PassingCars.hpp"

using namespace std;

@interface PassingCars : XCTestCase

@end

@implementation PassingCars

- (void)testExample {
    vector<int> input { 0, 1, 0, 1, 1 };
    XCTAssertEqual(5, codility_passing_cars(input));
}

@end
