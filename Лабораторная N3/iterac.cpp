#include <iostream>
#include <math.h>
using namespace std;

double u(double x)
{
    return log(exp(-x) + 2);
}

double u1(double x)
{
    return -(exp(-x) / (exp(-x) + 2));
}

int main()
{
    double a = 0;
    double b = 1;
    double x = (a + b) / 2;
    double pg = 0.0000001;
    if (fabs(u1(x)) < 1)
    {
        while (fabs(x - a) > pg)
        {
            a = x;
            x = u(x);
        }
        cout << x;
    }
    return 0;
}
