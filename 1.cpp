#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, p, z;
	do
	{
		cout << "¬ведите значение n:";
		cin >> n;
	} while (n < 3 || n % 2 == 0);
	p = (n - 1) / 2;
	z = 1;
	for (int i = 1; i <= (n + 1) / 2; ++i)
	{
		for (int j = 1; j <= p; ++j)
		{
			cout << ' ';
		}
		for (int k = 1; k <= z; ++k)
		{
			cout << '*';
		}
		p = p - 1;
		z = z + 2;
		cout << endl;
	}
	return 0;
}


