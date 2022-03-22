#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
int st(string m, int d)
{
	int check=0;
	for (int i = 0; i < d; i++)
	{
		check = isdigit(m[i]);
	}
	return check;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	string f1 = "f1.txt";
	string f2 = "f2.txt";
	fstream  fs1;
	fstream fs2;
	fs1.open(f1, fstream::in | fstream::out);
	fs2.open(f2, fstream::in | fstream::out);
	if (!fs1.is_open() || !fs2.is_open())
	{
		cout << "Ошибка открытия файлов" << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		string m1;
		string m2;
		int c = 0;
		while (!fs1.eof())
		{
			int d;
			m1 = "";
			fs1 >> m1;
			d = size(m1);
			if (st(m1, d) == 0)
			{
				fs2 << m1<<"\n";
				if (m1[0] == 'A')
				{
					c++;
				}
			}
		}
		cout <<"Количество строк начинающихся с буквы A:" << c << endl;
	}
	
}