#include <iostream>
using namespace std;
void rad(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void v(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void del(int*& arr, int& n, int x)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != x)
		{
			c++;
		}
	}
	int g = n;
	n = c;
	int* newarr = new int[c];
	for (int i = 0,j=0; i <g;++i)
	{
		if (arr[i] != x)
		{
			newarr[j] = arr[i];
			j++;
		}
	}
	delete[] arr;
	arr = newarr;
	
}
void push_back(int*& arr, int& n)
{
	int c=0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			c++;
		}
	}
	n =n+c;
	int* newarr = new int[n];
	for (int i = 0, j = 0; i < n; j++)
	{
		if (arr[i] % 2 == 0)
		{
			newarr[j] = 0;
			newarr[j+1] = arr[i];
			i++;
			j++;
		}
		else { newarr[j] = arr[i]; i++; }
	}
	delete[] arr;
	arr = newarr;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 5, x;
	int* arr = new int[n];
	rad(arr, n);
	v(arr, n);
	cout << endl;
	cout << "Введите элемент который хотитие удалить: ";
	cin >> x;
	del(arr, n, x);
	v(arr, n);
	cout << endl;
	push_back(arr, n);
	v(arr, n);
	delete[] arr;
}

