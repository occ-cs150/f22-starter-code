#ifndef NUM_H_
#define NUM_H_
#include <string>
// A rational number class
class Num
{
public:
    Num() = default;
    Num(int n, int d);
    Num(int n);
    std::string toString() const;
    Num& operator+=(const Num& rhs);
// Define friends here

private:
    int m_num = 0;
    int m_den = 1;
};
// Define overloaded != operator here (NOT a friend)


const Num operator+(const Num& lhs, const Num& rhs);
std::ostream& operator<<(std::ostream& out, const Num& n);
std::istream& operator>>(std::istream& in, Num& n);
#endif
