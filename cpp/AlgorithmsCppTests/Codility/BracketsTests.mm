//
//  BracketsTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#import <XCTest/XCTest.h>
#import "Brackets.hpp"

using namespace std;

@interface BracketsTests : XCTestCase

@end

@implementation BracketsTests

- (void)testExampleValid {
    XCTAssertEqual(1, codility_brackets("{[()()]}"));
}

- (void)testExampleInvalid {
    XCTAssertEqual(0, codility_brackets("([)()]"));
}

@end
