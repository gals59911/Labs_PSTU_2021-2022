#include <iostream>
#include <list>
#include <algorithm>
#include "Money.h"

using namespace std;

typedef list<Money> Tlist;
Money s;


struct Greater_s
{
	bool operator() (Money t)
	{
		if (t > s) return true;
		else return false;
	}
};


Tlist make_list(int n)
{
	Tlist l;

	for (int i = 0; i < n; i++)
	{
		Money a;
		cin >> a;
		l.push_back(a);
	}

	return l;
}
void print_list(Tlist& l)
{
	Tlist b;
	int size = l.size();
	for (int i = 0; i < size; i++)
	{
		cout << l.front() << " ";
		b.push_back(l.front());
		l.pop_front();
	}
	cout << "\n";
	l = b;
}
void add_elem(Tlist& l, Money n, int pos)
{
	if (pos >> l.size() - 1)
	{
		cout << "Position > size\n";
		return;
	}
	Tlist::iterator i;
	Money min =n;
	Tlist buf;
	for (int j = 0; j < pos - 1; j++)
	{
		buf.push_back(l.front());
		l.pop_front();
	}
	buf.push_back(min);

	int size = l.size();
	for (int i = 0; i < size; i++)
	{
		buf.push_back(l.front());
		l.pop_front();
	}

	l = buf;
}
void d_elem(Tlist& l,int pos)
{
	if (pos >> l.size() - 1)
	{
		cout << "Error! Position > size\n";
		return;
	}
	Tlist::iterator i;
	Tlist buf;
	for (int j = 0; j < pos - 1; j++)
	{
		buf.push_back(l.front());
		l.pop_front();
	}
	l.pop_front();
	int size = l.size();
	for (int i = 0; i < size; i++)
	{
		buf.push_back(l.front());
		l.pop_front();
	}

	l = buf;
}
Money ras;
void f(Money& b) 
{
	b = b - ras;
}

Tlist& r_elem(Tlist& l)
{
	Tlist::iterator min, max,elem;
	Tlist r;
	Tlist buf;
	min = min_element(l.begin(), l.end());
	max = max_element(l.begin(), l.end());
	Money minsum = *min;
	Money maxsum = *max;
	ras = maxsum - minsum;
	for_each(l.begin(), l.end(), f);
	return l;
}
int main()
{
	int pos,size,pos1;
	Money sum;
	cout << "Enter size :"; 
	cin >> size;
	Tlist l;
	l = make_list(size);
	cout << "Your list: ";  print_list(l);
	cout << "\nEnter position: "; 
	cin >> pos;
	cout << "\nEnter element: ";
	cin >> sum;
	add_elem(l,sum,pos);
	cout << "Add min: ";  print_list(l); cout << endl;
	cout << "Enter position:";
	cin >> pos1;
	d_elem(l, pos1);
	print_list(l);
	cout << '\n';
	print_list(r_elem(l));
	return 0;
}