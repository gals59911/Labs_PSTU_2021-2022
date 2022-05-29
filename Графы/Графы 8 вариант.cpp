#include <iostream>
int size = 6;
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a[6][6] =
	{//                1   2    3    4    5  6
					  {0, 11,  -1,  -1, -1, 16}, //1
					  {11, 0, 18, -1, 23, -1},//2
					  {-1, 18, 0, 16, 6, -1},//3
					  {-1, -1, 16, 0, -1,  9},//4
					  {-1, 23, 6,-1, 0, 3},//5
					  {16, -1, -1, 9, 3, 0},//6
	};
	int min_d[6]; // минимальное расстояние
	int visit[6]; // посещенные вершины
	int temp, minindex, min;
	int begin_index = 3;
	cout << "Матрица смежностей: " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << " " << a[i][j] << " ";
		}
		cout << endl;
	}

	//Инициализация вершин и расстояний
	for (int i = 0; i < size; i++)
	{
		min_d[i] = 10000;
		visit[i] = 1;
	}
	min_d[begin_index] = 0;
	// Шаг алгоритма
	do {
		minindex = 10000;
		min = 10000;
		for (int i = 0; i < size; i++)
		{ // Если вершину ещё не обошли и вес меньше min
			if ((visit[i] == 1) && (min_d[i] < min))
			{ // Переприсваиваем значения
				min = min_d[i];
				minindex = i;
			}
		}
		// Добавляем найденный минимальный вес
		// к текущему весу вершины
		// и сравниваем с текущим минимальным весом вершины
		if (minindex != 10000)
		{
			for (int i = 0; i < size; i++)
			{
				if (a[minindex][i] > 0)
				{
					temp = min + a[minindex][i];
					if (temp < min_d[i])
					{
						min_d[i] = temp;
					}
				}
			}
			visit[minindex] = 0;
		}
	} while (minindex < 10000);
	// Вывод кратчайших расстояний до вершин
	cout << endl << "Кратчайшие расстояния до вершин: " << endl;
	for (int i = 0; i < size; i++)
		cout << " " << min_d[i] << " ";

	return 0;
}