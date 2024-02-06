#include <iostream>
#include <stdlib.h>
using namespace std;
const int k = 100;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int a[k];
    cout << "Введите колличество чисел в массиве: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i]; // Создание массива длиной n
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' '; // Вывод массива
    }
    cout << endl;
    for (int i = 0; i < n; ++i) // Цикл, перебирающий элементы массива
    {
        if (a[i] % 2 == 0) // Если элемент четный
        {
            n++;
            for (int j = n; j > i; --j) // Цикл, передвигающий все элементы вправо
            {
                a[j] = a[j - 1];
            }
            a[i] = -1; // Поставить -1
            ++i;
        }
    }
    cout << "Массив а: ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' '; // Вывод полученного массива
    }
    cout << endl;
    int i = 0;
    while (i < n) // Цикл перебора элементов
    {
        if (a[i] % 2 != 0) // Если элемент нечетный
        {
            for (int j = i; j < n-1; ++j) // Сдвинуть все эл-ты влево
            {
                a[j] = a[j + 1]; 
            }
            --n;
        }
        else 
        ++i;
    }
    cout << "Массив б: ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' '; // Вывод полученного массива
    }
    return 0;
}
