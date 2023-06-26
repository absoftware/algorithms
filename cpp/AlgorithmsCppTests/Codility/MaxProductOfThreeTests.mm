//
//  MaxProductOfThreeTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#import <XCTest/XCTest.h>
#import "MaxProductOfThree.hpp"

using namespace std;

@interface MaxProductOfThreeTests : XCTestCase

@end

@implementation MaxProductOfThreeTests

- (void)testExample {
    vector<int> input { -3, 1, 2, -2, 5, 6 };
    XCTAssertEqual(60, codility_max_product_of_three(input));
}

@end
