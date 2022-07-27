#include <iostream>
#include <string>
using namespace std;

string STUDENT = "Who are you?"; // Add your Canvas id here.

#include "partial.h"

// Define your template functions here



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    int a[] = {1, 2, 3};
    cout << toString(a, 3) << endl;
    double b[] = {3.0, 4.0, 5.2};
    cout << toString(b, 3) << endl;
    
    cout << "Enter up to 5 integers; quit when done." << endl;
    int c[100];
    auto n = readArray(c, 5);
    cout << "You read: " << toString(c, n) << endl;
    
    cout << "Enter up to 5 doubles; quit when done." << endl;
    double d[100];
    n = readArray(d, 5);
    cout << "You read: " << toString(d, n) << endl;
    
    int e[] = {1, 2, 3, 4, 6};
    cout << "indexOf(e, 5, 4): " << indexOf(e, 5, 4) << endl;
    cout << "indexOf(e, 5, 5): " << indexOf(e, 5, 5) << endl;
    
    double f[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "indexOf(f, 5, 1.2): " << indexOf(f, 5, 1.2) << endl;
    cout << "indexOf(f, 5, 1.1): " << indexOf(f, 5, 1.1) << endl;

    return 0;
}
