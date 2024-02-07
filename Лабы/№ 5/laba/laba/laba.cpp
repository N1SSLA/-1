#include<iostream>
#include<stdlib.h>
using namespace std;
const int height = 3;
const int length = 3;

int main()
{
	int poluch[height][length];
	int ishodny[height][length] = { // Исходный двумерный массив (для проверки правильности)
		{3,4,8},
		{7,2,1},
		{5,9,0}
	};

	int arr[height * length * 2] = { 7,2,1, 3,4,8, 5,9,0,    8,1,0, 3,7,5, 4,2,9 }; /* Создание одномерного массива из 
																		последовательно записанных строк и столбцов*/

	for (int i = 0; i < height * length; i += height) // Перебор первых эл-ов строк массива, идет до 9 элемента (конец строк)
		for (int j = height * length; j < height * length * 2; ++j) // Перебор элементов столбцов
		{
			if (arr[i] == arr[j]) // Если первый элемент строки равен j-ому элементу какого-то столбца
			{
				int s = (j - height * length) % height; // Нахождение индекса строки строку
				for (int z = 0; z < length; ++z) // Цикл, повторяющийся 3 раза, чтобы "взять" строку
					poluch[s][z] = arr[z + i]; // Заполняет строку
			}
		}

	for (int i = 0; i < height; ++i) // Вывод полученного массива
	{
		for (int j = 0; j < height; ++j)
			cout << poluch[i][j] << " ";
		cout << endl;
	}
}