#include <iostream>
#include <cmath>
using namespace std;
class A {
private:
	double d;
public:
	void distance(double x, double y)
	{
		d = sqrt(pow(x, 2) + pow(y, 2));
	}
	void Print()
	{
		cout << "���������� �� ������ �������� �� �������� �����: "<<d;
	}
};
int main()
{
	setlocale(LC_ALL, "Rus");
	A a;
	double x, y;
	cout << "������� ���������� x: ";
	cin >> x;
	cout << "������� ���������� y: ";
	cin >> y;
	a.distance(x, y);
	a.Print();
	
}