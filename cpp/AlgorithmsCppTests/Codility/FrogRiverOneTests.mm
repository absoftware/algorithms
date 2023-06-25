//
//  FrogRiverOneTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "FrogRiverOne.hpp"

using namespace std;

@interface FrogRiverOneTests : XCTestCase

@end

@implementation FrogRiverOneTests

- (void)testExample {
    vector<int> input { 1, 3, 1, 4, 2, 3, 5, 4 };
    XCTAssertEqual(6, codility_frog_river_one(5, input));
}

@end
