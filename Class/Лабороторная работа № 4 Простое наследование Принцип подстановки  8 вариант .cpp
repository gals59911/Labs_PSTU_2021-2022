#include <iostream>
using namespace std;
class Triad {
protected:
	int first;
	int second;
	int third;
public:
	Triad()
	{
		first = 0;
		second = 0;
		third = 0;
	}
	Triad(int newfirst, int newsecond, int newthird)
	{
		this->first = newfirst;
		this->second = newsecond;
		this->third = newthird;
	}
	Triad(const Triad& p)
	{
		this->first = p.first;
		this->second = p.second;
		this->third = p.third;
	}
	virtual ~Triad() {}
	void Set_f(int first) { this->first = first; }
	void Set_s(int second) { this->second = second; }
	void Set_t(int third) { this->third = third; }
	int Get_f() { return this->first; }
	int Get_s() { return this->second; }
	int Get_t() { return this->third; }
	Triad& operator =(const Triad& p) { if (&p == this) { return *this; } first = p.first; second = p.second; third = p.third; return *this; }
	friend istream& operator >>(istream& in, Triad& p) {
		cout << "First number: "; in >> p.first;
		cout << "Second number: "; in >> p.second;
		cout << "Third number: "; in >> p.third;
		return in;
	}
	friend ostream& operator <<(ostream& out, const Triad& p) {
		return (out << "Triad:" << p.first << " " << p.second << " " << p.third);
	}
	bool operator <(const Triad& p)
	{
		if ((this->first + this->second + this->third) < (p.first + p.second + p.third))
		{
			return 1;
		}
	}
	bool operator >(const Triad& p)
	{
		if ((this->first + this->second + this->third) > (p.first + p.second + p.third))
		{
			return 1;
		}
	}
	bool operator ==(const Triad& p)
	{
		if ((this->first + this->second + this->third) == (p.first + p.second + p.third))
		{
			return 1;
		}
		else {
			return 0;
		}
	}
	Triad operator +(const int& p)
	{
		Triad k;
		k.first = this->first + p;
		k.second = this->second + p;
		k.third = this->third + p;
		return k;
	}
	Triad operator -(const int& p)
	{
		Triad k;
		k.first = this->first - p;
		k.second = this->second - p;
		k.third = this->third - p;
		return k;
	}
	Triad operator *(const int& p)
	{
		Triad k;
		k.first = this->first * p;
		k.second = this->second * p;
		k.third = this->third * p;
		return k;
	}
	Triad operator /(const int& p)
	{
		Triad k;
		k.first = this->first / p;
		k.second = this->second / p;
		k.third = this->third / p;
		return k;
	}
};
class Data : public Triad {
protected:
	int ch;
	int m;
	int year;
public:
	Data() { ch = 0; m = 0; year = 0; }
	Data(int ch, int m, int year) { this->ch = ch; this->m = m; this->year = year; }
	Data& operator =(const Data& p) { if (&p == this) { return *this; } first = p.ch; second = p.m; third = p.year; ch = p.ch; m = p.m; year = p.year; return *this; }
	friend istream& operator >>(istream& in, Data& p) {
			cout << "Number: "; in >> p.ch;
			cout << "Month: "; in >> p.m;
			cout << "Year: "; in >> p.year;
			if (p.ch >= 1 && p.ch <= 31 && p.m>=1 && p.m <= 12)
			{
				return in;
			}
			else { abort();}
	}
	friend ostream& operator <<(ostream& out, const Data& p) {
		return (out << "Data:" << p.ch << "." << p.m << "." << p.year);
	}
	bool operator <(const Data& p)
	{
		if ((this->ch + this->m + this->year) < (p.ch + p.m + p.year))
		{
			return 1;
		}
	}
	bool operator >(const Data& p)
	{
		if ((this->ch + this->m + this->year) > (p.ch + p.m + p.year))
		{
			return 1;
		}
	}
	bool operator ==(const Data& p)
	{
		if ((this->ch + this->m + this->year) == (p.ch + p.m + p.year))
		{
			return 1;
		}
		else {
			return 0;
		}
	}
	void Set_f(int first) { this->ch = first; }
	void Set_s(int second) { this->m = second; }
	void Set_t(int third) { this->year = third; }
	int Get_f() { return this->ch; }
	int Get_s() { return this->m; }
	int Get_t() { return this->year; }
	~Data(){}
};
void f1(Triad& d1)
{
	d1.Set_f(14);
	d1.Set_s(10);
	d1.Set_t(2022);
	cout << d1 << endl;
}
Triad f2()
{
	Triad d3(25, 4, 2022);
	return d3;
}
int main()
{
	Triad m1, m2;
	cin >> m1;
	cin >> m2;
	bool result1 = m1 < m2;
	bool result2 = m1 > m2;
	bool result3 = m1 == m2;
	if (result1 == 1)
	{
		cout << m1 << " < " << m2 << endl;
	}
	if (result2 == 1)
	{
		cout << m1 << " > " << m2 << endl;
	}
	if (result3 == 1)
	{
		cout << m1 << " == " << m2 << endl;
	}
	else
	{
		cout << m1 << " != " << m2 << endl;
	}
	m1 = m1 * 6;
	cout << m1 << endl;
	m1 = m1 + 6;
	cout << m1 << endl;
	m1 = m1 - 6;
	cout << m1 << endl;
	m1 = m1 / 6;
	cout << m1 << endl;
	Data d1,d2;
	cin >> d1;
	cin >> d2;
	bool r1 = d1 < d2;
	bool r2 = d1 > d2;
	bool r3 = d1 == d2;
	if (r1 == 1)
	{
		cout << d1 << " < " << d2 << endl;
	}
	if (r2 == 1)
	{
		cout << d1 << " > " << d2 << endl;
	}
	if (r3 == 1)
	{
		cout << d1 << " == " << d2 << endl;
	}
	else
	{
		cout << d1 << " != " << d2 << endl;
	}
	cout << m1 << endl;
	cout << d1 << endl;
	f1(d1);
	m1=f2();
	cout << f2();
}