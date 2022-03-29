#include <iostream>
#include <string>
using namespace std;
int b(string str, string substr)
{
	int strl, substrl, res = -1;
	strl = str.size();
	substrl = substr.size();
	if (strl != 0 && substrl != 0)
	{
		int i, Pos;
		int bias[256];
		for (i = 0; i < 256; i++)
		{
			bias[i] = substrl;
		}
		for (i = substrl - 2; i >= 0; i--)
		{
			if (bias[int((unsigned char)substr[i])] == substrl)
			{
				bias[int((unsigned char)substr[i])] = substrl - i - 1;

			}
		}
		Pos = substrl - 1;
		while (Pos < strl)
		{
			if (substr[substrl - 1] != str[Pos])
			{
				Pos += bias[int((unsigned char)str[Pos])];
			}
			else {
				for (i = substrl - 1; i >= 0; i--)
				{
					if (substr[i] != str[Pos - substrl + i + 1])
					{
						Pos += bias[int((unsigned char)str[Pos - substrl + i + 1])];
						break;
					}
					else if (i == 0)
					{
						return Pos - substrl + 1;
					}
				}
			}
		}
	}
	return res;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	string str = "psfadsgklsdgks";
	cout <<"Начальная строка: "<< str << endl;
	string substr = "dgks";
	cout << "Подстрока:" << substr << endl;
	int k = substr.size();
	int in = b(str, substr);
	int l = b(str, substr) + k-1;
	for (int i =in; i <l; i++)
	{
		char sim = str[i];
		str[i] = str[l];
		str[l] = sim;
		l--;
	}
	cout <<"Измененная строка: "<< str;
}