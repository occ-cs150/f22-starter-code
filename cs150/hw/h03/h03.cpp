/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

string STUDENT = "Who Are You?";  // Add your Canvas login name
extern string ASSIGNMENT;

// Function Prototypes
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */
int run()
{
	printTitle();
	string letterGrade = getInput();
	double points = letterToPoints(letterGrade);
	printReport(points);

    return 0;
}

// Implement your functions here

