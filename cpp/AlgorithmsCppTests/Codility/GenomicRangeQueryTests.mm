//
//  GenomicRangeQueryTests.mm
//  AlgorithmsCppTests
//
//  Created by Ariel Bogdziewicz on 25/06/2023.
//

#import <XCTest/XCTest.h>
#import "GenomicRangeQuery.hpp"
#include <sstream>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

@interface GenomicRangeQueryTests : XCTestCase

@end

@implementation GenomicRangeQueryTests

- (void)testExample {
    string S = "CAGCCTA";
    vector<int> P { 2, 5, 0 };
    vector<int> Q { 4, 5, 6 };
    vector<int> expected { 2, 4, 1 };
    XCTAssertEqual(expected, codility_genomic_range_query(S, P, Q));
}

- (void)testBigRepeatingMinumumGlobalFactor {
    [self measureBlock:^{
        ostringstream repeated;
        fill_n(ostream_iterator<string>(repeated), 50000, string("GT"));
        vector<int> P(50000, 0);
        vector<int> Q(50000, 100000 - 1);
        vector<int> expected(50000, 3);
        XCTAssertEqual(expected, ::codility_genomic_range_query(repeated.str(), P, Q));
    }];
}

- (void)testBigRepeatingAnnoyingTailingFactor {
    [self measureBlock:^{
        ostringstream repeated;
        fill_n(ostream_iterator<string>(repeated), 49999, string("GT"));
        fill_n(ostream_iterator<string>(repeated), 1, string("CC"));
        vector<int> P(50000, 0);
        vector<int> Q(50000, 100000 - 1);
        vector<int> expected(50000, 2);
        XCTAssertEqual(expected, ::codility_genomic_range_query(repeated.str(), P, Q));
    }];
}

@end
