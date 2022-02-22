#include <iostream>
#include <cmath>
using namespace std;
int hano(int n, int st, int o, int v)
{
	if (n > 0)
	{
		hano(n - 1, st, v, o);
		cout << st << "=>" << o << endl;
		hano(n - 1, v, o, st);
	}
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cin >> n;
	hano(n, 1, 3, 2);

}