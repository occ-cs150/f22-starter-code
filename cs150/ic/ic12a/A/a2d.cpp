/**
 *  @file a2d.cpp
 *  @author your name
 *  @version section and date
 */
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

string STUDENT = "Who are you?"; // Add your Canvas id here.

#include "a2d.h"

// Add your function implementations here


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}

// I've already completed the aout() function
ostream& aout(ostream& out, const int a[][MAX_COLS], size_t rows, size_t cols)
{
    assert(cols <= MAX_COLS);
    out << "{";
    for (size_t r = 0; r < rows; r++)
    {
        out << "{" << a[r][0];
        for (size_t c = 1; c < cols; c++)
        {
            out << " " << a[r][c];
        }
        out << ((r == rows - 1) ? "}" : "}, ");
    }
    out << "}";
    return out;
}
