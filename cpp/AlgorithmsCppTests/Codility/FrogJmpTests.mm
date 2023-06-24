//
//  FrogJmpTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#import <XCTest/XCTest.h>
#import "FrogJmp.hpp"

using namespace std;

@interface FrogJmpTests : XCTestCase

@end

@implementation FrogJmpTests

- (void)testExample {
    XCTAssertEqual(3, codility_frog_jmp(10, 85, 30));
}

@end
