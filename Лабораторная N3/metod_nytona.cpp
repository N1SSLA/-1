#include <iostream>
using namespace std;
int main()
{
    float x, x1, pg, f, fx;
    pg = 0.000001;
    x1 = 1.0;
    do
    {
        x = x1;
        fx = exp(x) + exp(-x);
        f = exp(x) - exp(-x) - 2;
        x1 = x - (f / fx);
    } while ((x - x1) > pg);
    cout << x1 << endl;
    return 0;
}