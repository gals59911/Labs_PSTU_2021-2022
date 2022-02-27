#include <iostream>
using namespace std;
const int n = 5;
int arr[n];
void sort(int arr[], int L, int R)
{
	int i, j, x, tmp;
	i = L;
	j = R;
	x = arr[(L + R) / 2];
	do
	{
		while (arr[i] < x) { i++; }
		while (x < arr[j]) { j--; }
		if (i <= j)
		{
			if (i < j) { tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp; }
			i++;
			j--;
		}
	} while (i <= j);
	if (L < j)  sort(arr, L, j);
	if (i < R)  sort(arr, i, R);
}
void v(int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
int main()
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	sort(arr, 0, n - 1);
	v(arr);
}