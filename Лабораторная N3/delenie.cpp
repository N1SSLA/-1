#include <iostream>
using namespace std;
int main()
{
	float x, ya, yx, b, a;
	b = 1;
	a = 0;
	float pg = 0.0000001;
	do
	{
		x = (a + b) / 2;
		yx = exp(x) - exp(-x) - 2;
		ya = exp(a) - exp(-a) - 2;
		if (ya * yx < 0)
		{
			b = x;
		}
		else a = x;
	} while (pg < (b - a));
	cout << a;
	return 0;
}