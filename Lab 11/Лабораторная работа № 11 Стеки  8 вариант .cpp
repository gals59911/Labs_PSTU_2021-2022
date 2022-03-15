#include <iostream>
#include <stack>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	stack <string> s1;
	stack <string> s2;
	int n,c=0;
	string sim;
	cout << "Введите количество элементов: ";
	cin >> n;
	for (int i = 1;i<=n;i++)
	{
		cin >> sim;
		s1.push(sim);
		if (i % 2 != 0)
		{
			s2.push(sim);
			c++;
		}
	}
	for (int i=0; i <c; i++)
	{
		s1.push(s2.top());
		s2.pop();
	}
	while (!s1.empty())
	{
		cout << s1.top() << " ";
		s1.pop();
	}

}
