/**
    CS 150 - Practice with vectors.
    @author Stephen Gilbert
    @date Fall 2021
*/
#include <iostream>
#include <string>
// include anything?
using namespace std;

#include "cs150check.h"

string STUDENT = "Who are you?"; // Add your Canvas id here.

void runTests()
{
    // Create vectors of short, int, long, float, and
    // double, each containing 5 elements of the Fibonacci sequence.

    // 1. v1 initialized from an array a
    // short, 0, 1, 1, 2, 3

    // 2. v2 initialized using c++ 11 list syntax
    // int, 5, 8, 13, 21, 34

    // 3. v3 as a sized vector, filled with a traditional loop
    // long, 55, 89, 144, 233, 377

    // 4. v4 as a sized vector, filled with a range-based loop
    // float, 610, 987, 1597, 2584, 4181

    // 5. v5 as an unsized vector, filled with a while loop
    // double, 6765, 10946, 17711, 28657, 46368

   // LEAVE THIS ALONE
  	beginTests(); // test heading

  	beginFunctionTest("Initialize vectors");
  	assertEqualsMsg("v1 initialized correctly", ans1, v1);
  	assertEqualsMsg("v2 initialized correctly", ans2, v2);
  	assertEqualsMsg("v3 initialized correctly", ans3, v3);
  	assertEqualsMsg("v4 initialized correctly", ans4, v4);
  	assertEqualsMsg("v5 initialized correctly", ans5, v5);

    endFunctionTest(); // end

    endTests();
}

