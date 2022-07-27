#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string STUDENT = "Who are you?"; // Add your Canvas id here.

#include "partial.h"

// Define your template functions here



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    srand(static_cast<unsigned>(time(0)));

    // Test an array of ints
    const size_t capacity = 25;
    int a[capacity];
    size_t n = 0;

    for (int i = 0; i < 5; i++)
    {
        int x = rand();
        cout << "Inserting " << x << " into a->";
        insert(a, n, capacity, x);
        cout << '[';
        if (n > 0) {
            cout << a[0];
            for (size_t j = 1; j < n; j++)
                cout << ' ' << a[j];
        }
        cout << ']' << endl;
    }

    // an array of doubles
    cout << endl << "Now an array of double" << endl;
    double b[100];
    n = 0;
    for (int i = 0; i < 4; i++)
    {
        double val = static_cast<double>(rand()) / (rand() + 1);
        cout << "Inserting " << val << " into b->";
        insert(b, n, capacity, val);
        cout << '[';
        if (n > 0) {
            cout << b[0];
            for (size_t j = 1; j < n; j++)
                cout << ' ' << b[j];
        }
        cout << ']' << endl;
    }

    return 0;
}
