#include <cstring> // Notice NO C++ strings
using namespace std;

const char *YOU = "Who are you?"; // Add your Canvas id here.

/**
    Write a function named minCat(). Given two c-string literals,
    append them together (known as "concatenation") and
    return the result in the third argument, a non-constant
    array of char. The fourth parameter is the size of the array.

    If the input strings are different lengths, then omit the
    leading chars from the longer string so it is the same length as
    the shorter string. So "Hello" and "Hi" yield "loHi".
    The strings may be any length.

    If the combined string output is larger than the space available,
    then divide the available space in half (leaving room for the terminator)
    and concatenate the last character from each string.

    Use the functions from the <cstring> header.
    DO NOT use any of the C++ string library.

    Some examples:
        minCat("Hello", "Hi", out, 100) → "loHi"
        minCat("Hello", "cpp", out, 100) → "llocpp"
        minCat("cpp", "Hello", out, 100) → "cppllo"
        minCat("abcd", "efgh", out, 5) → "cdgh"
*/

// Write your function here



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}