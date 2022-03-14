#include <iostream>
#include <queue>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	queue <int> q;
	int n,c=0,c1=0;
	cout << "Введите длину очереди: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ch;
		cin >> ch;
		if (ch % 2 == 0)
		{
			c++;
		}
		q.push(ch);

	}
	while (!q.empty())
	{
		if (q.front() % 2==0)
		{
			c1++;
		}
		if (q.front() % 2 == 0 && c1==c)
		{
			q.pop();
		}
		else 
		{
			cout << q.front();
			q.pop();
		}
	}
}