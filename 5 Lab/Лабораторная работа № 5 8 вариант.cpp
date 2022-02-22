#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	const int s = 2;
	bool flag = false;
	int arr[s][s];
	for (int i = 0; i < s; i++)
	{
		for (int g = 0; g < s; g++)
		{
			cin >> arr[i][g];
		}
	}
		for (int i = 0; i < s; i++)
		{
			for (int g = 0; g < s; g++)
			{
				cout << arr[i][g] << "\t";
			}
			cout << endl;
		}
			for (int i = 0; i < s-1; i++)
			{
				for (int g = i+1; g < s; g++)
				{
					int str = arr[i][g];
					arr[i][g] = arr[g][i];
					arr[g][i] =str;

				}
			}
	
	cout << endl;
	for (int i = 0; i <s; i++)
	{
		for (int g = 0; g < s; g++)
		{
			cout << arr[i][g] << "\t";

		}
		cout << endl;
	}
	for (int i = 0; i < s; i++)
	{
		for (int g = 0; g < s; g++)
		{
			if (arr[i][g] != arr[g][i])
			{
				flag = true;
			}
		}
	}
	if (flag==true)
	{
		cout << "Матрица не симмтерична";
	}
	else { cout << "Матрица симметрична"; }
}	