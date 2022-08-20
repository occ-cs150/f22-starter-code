/**
 *  @author Stephen Gilbert
 *  @date CS 150 Testing Template
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

#include "cs150check.h"

///////////// Add header for function being tested

//////////// Add your student ID here
string STUDENT = "YOUR CANVAS LOGIN ID";

void runTests()
{
	srand(time(0));

	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for function //////////////////////
	beginFunctionTest(); // Test title

    // assertEquals(expected, actual); // int & string
    // assertDoubleEquals(expected, actual, tolerance); // double
    // assertEquals(expected ((call procedure), actual));

    endFunctionTest(); // end


    ///////// End all test runs /////////////////////////
    endTests();
}

//////////// Student tests or run
int run()
{
    // Add code you want to display here
    return 0;
}