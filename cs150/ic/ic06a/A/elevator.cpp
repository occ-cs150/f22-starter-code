// A recursive program with a small problem
#include <iostream>
using namespace std;

void elevator(int floor);

int main()
{
    elevator(0);    // start at the ground floor
}

void elevator(int floor)
{
    cout << "Going up. Floor: " << floor << endl;
    elevator(floor + 1);    // go to the next floor
}
