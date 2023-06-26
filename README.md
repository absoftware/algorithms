# Algorithms

Projects with set of algorithms just to remember syntax and some implementation details as a quick reminder. For now only C++ implementation.

## Available implementations

### C++ implementation (macOS, Xcode)

Implementation is based on **Xcode** project:

- Project [cpp/AlgorithmsCppLib.xcodeproj](cpp/AlgorithmsCppLib.xcodeproj): Please open this project in **Xcode** if you want to use it on your own computer. It will load C++ library and unit tests.
- Target [cpp/AlgorithmsCppLib](cpp/AlgorithmsCppLib/): C++ library with algorithms
- Target [cpp/AlgorithmsCppTests](cpp/AlgorithmsCppTests/): unit tests based on **XCTest** framework, so tests are written in Objective-C++ in files with extension `*.mm`.

## Codility

Website [Codility](https://app.codility.com/programmers/) delivers set of algorithmic exercises. List of solved tasks is here (all passed 100% for correctness and performance):

| Task *(external links)* | Implementation |
|---|---|
| [Lesson 1 (Iterations): BinaryGap](https://app.codility.com/programmers/lessons/1-iterations/binary_gap/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/BinaryGap.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/BinaryGapTests.mm)) |
| [Lesson 2 (Arrays): CyclicRotation](https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/CyclicRotation.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/CyclicRotationTests.mm)) |
| [Lesson 2 (Arrays): OddOccurrencesInArray](https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/OddOccurrencesInArray.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/OddOccurrencesInArrayTests.mm)) |
| [Lesson 3 (Time Complexity): FrogJmp](https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/FrogJmp.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/FrogJmpTests.mm)) |
| [Lesson 3 (Time Complexity): PermMissingElem](https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/PermCheck.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/PermCheckTests.mm)) |
| [Lesson 3 (Time Complexity): TapeEquilibrium](https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/TapeEquilibrium.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/TapeEquilibriumTests.mm)) |
| [Lesson 4 (Counting Elements): FrogRiverOne](https://app.codility.com/programmers/lessons/4-counting_elements/frog_river_one/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/FrogRiverOne.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/FrogRiverOneTests.mm)) |
| [Lesson 4 (Counting Elements): PermCheck](https://app.codility.com/programmers/lessons/4-counting_elements/perm_check/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/PermCheck.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/PermCheckTests.mm)) |
| [Lesson 4 (Counting Elements): MaxCounters](https://app.codility.com/programmers/lessons/4-counting_elements/max_counters/) *[medium]* | [C++](cpp/AlgorithmsCppLib/Codility/MaxCounters.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/MaxCountersTests.mm)) |
| [Lesson 4 (Counting Elements): MissingInteger](https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/) *[medium]* | [C++](cpp/AlgorithmsCppLib/Codility/MissingInteger.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/MissingIntegerTests.mm)) |
| [Lesson 5 (Prefix Sums): PassingCars](https://app.codility.com/programmers/lessons/5-prefix_sums/passing_cars/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/PassingCars.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/PassingCarsTests.mm)) |
| [Lesson 5 (Prefix Sums): CountDiv](https://app.codility.com/programmers/lessons/5-prefix_sums/count_div/) *[medium]* | [C++](cpp/AlgorithmsCppLib/Codility/CountDiv.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/CountDivTests.mm)) |
| [Lesson 5 (Prefix Sums): GenomicRangeQuery](https://app.codility.com/programmers/lessons/5-prefix_sums/genomic_range_query/) *[medium]* | [C++](cpp/AlgorithmsCppLib/Codility/GenomicRangeQuery.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/GenomicRangeQueryTests.mm)) |
| [Lesson 5 (Prefix Sums): MinAvgTwoSlice](https://app.codility.com/programmers/lessons/5-prefix_sums/min_avg_two_slice/) *[crazy][[help](https://codesays.com/2014/solution-to-min-avg-two-slice-by-codility/)]* | [C++](cpp/AlgorithmsCppLib/Codility/MinAvgTwoSlice.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/MinAvgTwoSliceTests.mm)) |
| [Lesson 6 (Sorting): Distinct](https://app.codility.com/programmers/lessons/6-sorting/distinct/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/Distinct.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/DistinctTests.mm)) |
| [Lesson 6 (Sorting): MaxProductOfThree](https://app.codility.com/programmers/lessons/6-sorting/max_product_of_three/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/MaxProductOfThree.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/MaxProductOfThreeTests.mm)) |
| [Lesson 6 (Sorting): Triangle](https://app.codility.com/programmers/lessons/6-sorting/triangle/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/Triangle.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/TriangleTests.mm)) |
| [Lesson 6 (Sorting): NumberOfDiscIntersections](https://app.codility.com/programmers/lessons/6-sorting/number_of_disc_intersections/) *[medium]* | TODO |
| [Lesson 7 (Stacks and Queues): Brackets](https://app.codility.com/programmers/lessons/7-stacks_and_queues/brackets/) *[easy]* | [C++](cpp/AlgorithmsCppLib/Codility/Brackets.cpp) ([tests](cpp/AlgorithmsCppTests/Codility/BracketsTests.mm)) |
