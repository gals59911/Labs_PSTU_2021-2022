#include <iostream>
int size = 6;
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a[6][6] =
	{
					  {0, 11,  -1,  -1, -1, 16},
					  {11, 0, 18, -1, 23, -1},
					  {-1, 18, 0, 16, 6, -1},
					  {-1, -1, 16, 0, -1,  9},
					  {-1, 23, 6,-1, 0, 3},
					  {16, -1, -1, 9, 3, 0},
	};
	int min_d[6]; 
	int visit[6]; 
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

	
	for (int i = 0; i < size; i++)
	{
		min_d[i] = 10000;
		visit[i] = 1;
	}
	min_d[begin_index] = 0;
	do {
		minindex = 10000;
		min = 10000;
		for (int i = 0; i < size; i++)
		{ 
			if ((visit[i] == 1) && (min_d[i] < min))
			{
				min = min_d[i];
				minindex = i;
			}
		}
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
	cout << endl << "Кратчайшие расстояния до вершин: " << endl;
	for (int i = 0; i < size; i++)
		cout << " " << min_d[i] << " ";

	return 0;
}
