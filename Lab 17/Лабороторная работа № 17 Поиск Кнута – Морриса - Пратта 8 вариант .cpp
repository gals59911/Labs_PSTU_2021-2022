#include <iostream>
#include <string>
using namespace std;
int kmp(string str, string substr)
{
	int i, j, strlen, substrl;
	strlen = str.length();
	substrl = substr.length();
	int* d = new int[substrl];
	i = 0;
	j = -1;
	d[0] = -1;
	while (i < substrl - 1)
	{
		while ((j >= 0) && (substr[j] != substr[i]))
		{
			j = d[j];
		}
		++i;
		++j;
		if (substr[i] == substr[j])
		{
			d[i] = d[j];
		}
		else {
			d[i] = d[j];
		}
	}
	i = 0;
	j = 0;
	for (i = 0, j = 0; (i <= strlen - 1) && (j <= substrl - 1); ++i, ++j)
	{
		while ((j >= 0) && (substr[j] != str[i]))
		{
			j = d[j];
		}
	}
	delete[] d;
	if (j == substrl)
	{
		return i-j;
	}
	else {

		return -1;
	}
}
int main()
{
	setlocale(LC_ALL, "Rus");
	string str = "aspdspfdsf";
	cout <<"Начальная строка: "<< str << endl;
	string substr = "dsf";
	cout << "Подстрока:" << substr << endl;
	int k = substr.size();
	str.erase(kmp(str, substr), k);
	substr += str;
	cout <<"Измененная строка: "<< substr;
}