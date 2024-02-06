#include <iostream>
#include <stdlib.h>
using namespace std;
const int k = 100;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    bool f;
    int a[k];
    cout << "Введите колличество чисел в массиве: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i]; //  Создание массива длиной n
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' '; // Вывод готового массива
    }
    cout << endl;
    f = true; // Флаг, который отвечает за упорядоченность массива
    int i = 0;
    while (f && i < n - 1)
    {
        if (a[i] >= a[i + 1]) // Проверка двух соседних эл-тов
        {
            f = false; // Если первый эл-т меньше, флажок перекидывается
        }
        ++i;
    }
    if (f) // Если флаг сохранил свое значение - вывод, что упорядочен
    {
        cout << "Последовательность упорядочена";
    }
    else
    {
        cout << "Последовательность не упорядочена";
    }
    return 0;
}
