//
//  OddOccurrencesInArrayTests.m
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#import <XCTest/XCTest.h>
#import "OddOccurrencesInArray.hpp"

using namespace std;

@interface OddOccurrencesInArrayTests : XCTestCase

@end

@implementation OddOccurrencesInArrayTests

- (void)test0 {
    vector<int> input;
    XCTAssertEqual(-1, codility_odd_occurrences_in_array(input));
}

- (void)test1 {
    vector<int> input { 9, 3, 9, 3, 9, 7, 9 };
    XCTAssertEqual(7, codility_odd_occurrences_in_array(input));
}

- (void)testBig {
    [self measureBlock:^{
        int expected = 17;
        int amount = 1000000;
        vector<int> input(2*amount + 1, 0);
        for (int i = 1; i <= amount; i++) { input[i - 1] = i; }
        input[amount] = expected;
        for (int i = 1; i <= amount; i++) { input[i + amount] = i; }
        XCTAssertEqual(expected, ::codility_odd_occurrences_in_array(input));
    }];
}

@end
