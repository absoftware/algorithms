//
//  MaxCountersTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "MaxCounters.hpp"

using namespace std;

@interface MaxCountersTests : XCTestCase

@end

@implementation MaxCountersTests

- (void)testExample {
    vector<int> input { 3, 4, 4, 6, 1, 4, 4 };
    vector<int> expected { 3, 2, 2, 4, 2 };
    XCTAssertEqual(expected, codility_max_counters(5, input));
}

@end
