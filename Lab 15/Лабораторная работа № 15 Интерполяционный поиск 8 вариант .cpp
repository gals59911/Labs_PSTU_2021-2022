#include <iostream>
using namespace std;
int in(int arr[], int size, int key)
{
	int left = 0;
	int right = size;
	int mid = 0;
	bool f = false;
	while (f != true && (left <= right))
	{
		mid = left + (((key - arr[left]) * (right - left)) / (arr[right] - arr[left]));
		if (arr[mid] < key)
		{
			left = mid + 1;
			size--;
		}
		else if (arr[mid] > key)
		{
			right = mid + 1;
			size--;
		}
		else { f = true; }
	}
	return size;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int size, key,c=0;
	cout << "Введите длину массива: ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
			else
			{
				arr[i] = arr[i];
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Введите элемент который хотите удалить: ";
	cin >> key;
	cout << in(arr, size, key) << endl;
	cout << endl;
	for (int i = 0; i <size; i++)
	{
		if (arr[i] == key)
		{
			arr[i] = arr[i - 1];
		}
		else 
		{
			cout << arr[i] <<" ";
		}
	}
	
}