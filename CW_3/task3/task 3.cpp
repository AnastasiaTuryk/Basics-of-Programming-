#include <iostream>
using namespace std;

struct Square
{
    double x;
    Square() : x(0.1) {}
    Square(double a)
    {
        x = (a > 0.1) ? a : 0.1;
    }
    double sq()
    {
        return x * x;
    }
};
ostream& operator << (ostream& os, const Square& a)
{
    os << a.x << " x " << a.x;
    return os;
}
int main()
{
    Square s(5);
    cout << "Square " << s << " has square " << s.sq() << endl;
    system("pause");
    return 0;
}