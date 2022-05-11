#include <iostream>
using namespace std;
class Objiect
{
public:
	virtual void Show() = 0;
};
class Triad : public Objiect
{
protected:
	int first;
	int second;
	int third;
public:
	Triad() { first = 0; second = 0; third = 0; }
	Triad(int newfirst, int newsecond, int newthird)
	{
		this->first = newfirst;
		this->second = newsecond;
		this->third = newthird;
	}
	Triad(const Triad& p)
	{
		first = p.first;
		second = p.second;
		third = p.third;
	}
	void setf(int f) { this->first = f; }
	void sets(int s) { this->second = s; }
	void sett(int t) { this->third = t; }
	int getf() { return first; }
	int gets() { return second; }
	int gett() { return third; }
	Triad& operator =(const Triad& p) { if (&p == this) { return *this; } first = p.first; second = p.second; third = p.third; return *this; }
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
	virtual ~Triad() { cout << "Delete" << endl; }
	friend istream& operator >>(istream& in, Triad& tmp);
	friend ostream& operator <<(ostream& out, Triad& tmp);
	void Show() override { cout << "Triad: " << first << " " << second << " " << third<<endl; }
};
istream& operator >>(istream& in, Triad& tmp) { cout << "First number: "; in >> tmp.first; cout << "Second number: "; in >> tmp.second; cout << "Third: "; in >> tmp.third; return in;}
ostream& operator <<(ostream& out, Triad& tmp) { return (out << "Triad: " << tmp.first << tmp.second << tmp.third<<endl); }
class Data : public Triad
{
public:
	Data()
	{
		first = 0;
		second = 0;
		third = 0;
	}
	Data(int newfirst, int newsecond, int newthird)
	{
		first = newfirst;
		second = newsecond;
		third = newthird;
	}
	Data(const Data& p)
	{
		first = p.first;
		second = p.second;
		third = p.third;
	}
	void setf(int f) { this->first = f; }
	void sets(int s) { this->second = s; }
	void sett(int t) { this->third = t; }
	int getf() { return first; }
	int gets() { return second; }
	int gett() { return third; }
	friend istream& operator >>(istream& in, Data& p);
	friend ostream& operator <<(ostream& out, const Data& tmp);
	~Data() { cout << "Delete: " << endl; }
	void Show() override { cout << "Data: " << first << " " << second << " " << third << endl; }
	Data& operator =(const Data& p) { if (&p == this) { return *this; } first = p.first; second = p.second; third = p.third; return *this; }
};
istream& operator >>(istream& in, Data& tmp) {
	cout << "Number: "; in >> tmp.first;
	cout << "Month: "; in >> tmp.second;
	cout << "Year: "; in >> tmp.third;
	if (tmp.first >= 1 && tmp.first <= 31 && tmp.second >= 1 && tmp.second <= 12)
	{
		return in;
	}
	else { abort(); }
}
ostream& operator <<(ostream& out, const Data& tmp) {
	return (out << "Data: " << tmp.first << "." << tmp.second << "." << tmp.third << endl);
}
class Vector
{
private:
	Objiect** beg;
	int size;
	int cur;
public:

	Vector()
	{
		beg = 0;
		size = 0;
		cur = 0;
	}
	Vector(int n)
	{
		beg = new Objiect * [n];
		cur = 0;
		size = n;
	}
	~Vector()
	{
		if (beg != 0)
		{
			delete[] beg;
			beg = 0;
		}
	}
	void add(Objiect* tmp)
	{
		if (cur < size)
		{
			beg[cur] = tmp;
			cur++;
		}
	}
	friend ostream& operator <<(ostream& out, const Vector& v);
};

ostream& operator<<(ostream& out, const Vector& v)
{
	if (v.size == 0)
	{
		out << "Empty" << endl;
	}
	Objiect** p = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*p)->Show();
		p++;
	}
	return out;
}
int main()
{
	Vector v(5);
	Triad a;
	cin >> a;
	Data b;
	cin >> b;
	Objiect* p = &a;
	v.add(p);
	p = &b;
	v.add(p); 
	cout << v; 
}
