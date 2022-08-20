#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

string STUDENT = "WHO ARE YOU?";  // Add your Canvas login name

void processExpenses(const string& infile, const string& outfile)
{
    // Open the input file
    // Print an error message and exit if it can't be found.
    
    // Create the output file expense-summary.txt
    // Print an error message and exit if it can't be found.
    
    // Loop through each character in the file
        // Is the character a NON-digit
        //      Then print it out
        // Otherwise
        //      Create and initialize sum to 0 for the line
        //      Repeat until until in fails or ch == '\n'
        //          If ch is a digit
        //              put it back in the stream
        //              read a number from the stream with >>
        //              add the number to the sum
        //          Read the next character
        //      Print sum with 2 decimals and a newline
    // End of outer loop
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
