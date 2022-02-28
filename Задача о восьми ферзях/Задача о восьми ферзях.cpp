#include <iostream>
using namespace std;
int b[8][8];
void set(int i, int j)
{
	for (int x = 0; x <= 7; ++x)
	{
		++b[x][j];
		++b[i][x];
		int f;
		f = j - i + x;
		if (f>=0 && f<=7)
		{
			++b[x][f];
		}
		f = j + i - x;
		if (f >= 0 && f <= 7)
		{
			++b[x][f];
		}
	}
	b[i][j] = -1;
}
void reset(int i, int j)
{
	for (int x = 0; x <= 7; ++x)
	{
		--b[x][j];
		--b[i][x];
		int f;
		f = j - i + x;
		if (f>=0 && f<=7)
		{
			--b[x][f];
		}
		f = j + i - x;
		if (f >= 0 && f <= 7)
		{
			--b[x][f];
		}
	}
	b[i][j] = 0;
}
bool tryq(int i)
{
	bool r = false;
	for (int j = 0; j <= 7; j++)
	{
		if (b[i][j] == 0)
		{
			set(i, j);
			if (i==7)
			{
				r = true;
			}
			else {
				r = tryq(i + 1);
				if (!r) { reset(i, j); }
			}
		}
	}
	return r;
}
int main()
{
	for (int i = 0; i <= 7; ++i)
	{
		for (int j = 0; j <= 7; ++j)
		{
			b[i][j] = 0;
		}
	}
	tryq(0);
	for (int i = 0; i <= 7; ++i)
	{
		for (int j = 0; j <= 7; j++)
		{
			if (b[i][j] == -1)
			{
				cout << "[] ";
			}
			else { cout << ". ";}
		}
		cout << "\n";
	}
	return 0;
}