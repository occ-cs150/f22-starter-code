/**
 *  CS 150 - Pointers, addresses, and so on exercises.
 */
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

const double PI = 3.1459;

int main()
{
    // Create some variables
    int n = 37;
    string name = "Steve";
    Employee waiter = {"Bob", 23000.0};

    // Print the variables
    cout << "n = " << n << endl;
    cout << "PI = " << PI << endl;
    cout << "name = " << name << endl;
    cout << "waiter = " << waiter << endl;

    // EXERCISE 1: print address and size of each
    // n lives at xxxx and uses xx bytes

    // EXERCISE 2: create pointer to each variable

    // EXERCISE 3: print pointers' address, direct and indirect value
    // ip contains xxxx, is stored at xxxx, and points to xxxx.


    return 0;
}
