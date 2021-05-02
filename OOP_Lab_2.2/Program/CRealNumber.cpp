#include "CRealNumber.h"
#include <cmath>
using namespace std;

RealNumber::RealNumber()
{
    x = 0;
}
RealNumber::RealNumber(float y)
{
    x = y;
}
RealNumber::RealNumber(const RealNumber& r)
{
    x = r.x;
}
RealNumber operator+(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x + b.x;
    return t;
}
RealNumber operator-(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x - b.x;
    return t;
}
RealNumber operator*(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x * b.x;
    return t;
}
RealNumber operator/(RealNumber& a, RealNumber& b)
{
    if (b.x)
    {
        RealNumber t(0);
        t.x = a.x / b.x;
        return t;
    }
    else

    {
        cerr << "Error!" << endl;
        return -1;
    }
}
int RealNumber::operator[](int i)
{
    float full;
    modf(x, &full);
    return full;
}
float RealNumber::operator ()()
{
    float full;
    return modf(x, &full);
}
ostream& operator << (ostream& out, const RealNumber& a)
{
    out << a.x;
    return out;
}
istream& operator >> (istream& in, RealNumber& a)
{
    in >> a.x;
    return in;
}