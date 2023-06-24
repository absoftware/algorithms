//
//  TapeEquilibriumTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "TapeEquilibrium.hpp"

using namespace std;

@interface TapeEquilibriumTests : XCTestCase

@end

@implementation TapeEquilibriumTests

- (void)testExample {
    vector<int> input { 3, 1, 2, 4, 3 };
    XCTAssertEqual(1, codility_tape_equilibrium(input));
}

@end
