//
//  DistinctTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#import <XCTest/XCTest.h>
#import "Distinct.hpp"

using namespace std;

@interface DistinctTests : XCTestCase

@end

@implementation DistinctTests

- (void)testExample {
    vector<int> input { 2, 1, 1, 2, 3, 1 };
    XCTAssertEqual(3, codility_distinct(input));
}

@end
