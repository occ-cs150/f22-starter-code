#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;
/**
   Computes a Fibonacci number.
   @param n an integer
   @return the nth Fibonacci number
*/
int fib(int n)
{
    if (n < 2) return n;
    return fib(n-1) + fib(n-2);
}

/////////// ADD YOUR CODE HERE /////////////////
int fib2(int n)
{
    if (n < 2) return n;
    return fib(n-1) + fib(n-2);
}


int main()
{
    cout << "Measuring Fibbonocci efficiency" << endl;
    cout << fixed << setprecision(0);

    // fib(10)
    auto start = chrono::steady_clock::now();
    cout << "fib(10)->" << fib(10);
    auto stop = chrono::steady_clock::now();
    auto diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(10)->" << fib2(10);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    // fib(25)
    start = chrono::steady_clock::now();
    cout << "fib(25)->" << fib(25);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(25)->" << fib2(25);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    // fib(35)
    start = chrono::steady_clock::now();
    cout << "fib(35)->" << fib(35);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(35)->" << fib2(35);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    // fib(45)
    start = chrono::steady_clock::now();
    cout << "fib(45)->" << fib(45);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(45)->" << fib2(45);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    cout << "\n -- done --" << endl;

    return 0;
}
