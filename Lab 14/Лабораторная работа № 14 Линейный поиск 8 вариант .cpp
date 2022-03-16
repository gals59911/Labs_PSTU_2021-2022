#include <iostream>
using namespace std;
int kol(int mas[],int n, int k)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] == k)
		{
			n--;
		}
	}
	return n;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 10;
	int* arr = new int[n];
	int k;
	cout << "Введите элемент, который хотите удалить: ";
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i <kol(arr,n,k); i++)
	{
		if (arr[i] == k)
		{
			arr[i] = arr[i - 1];
		}
		else {
			cout << arr[i] <<" ";
		}
		
	}
}
