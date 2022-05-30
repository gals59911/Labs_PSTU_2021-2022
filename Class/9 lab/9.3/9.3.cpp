#include <iostream>
#include "error.h"
#include "Set.h"
int main()
{
	try {
		Set a(6);
		cout << a;
		int i;
		cin >> i;
		cout << a[i] << endl;
		Set b(11);
		cout << a[i - 2] << endl;
		cout << a[i - 8] << endl;
	}
	catch (Error& e)
	{
		e.what();
	}
}
