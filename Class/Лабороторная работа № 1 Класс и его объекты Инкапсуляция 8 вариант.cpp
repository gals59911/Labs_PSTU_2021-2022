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
		cout << "Расстояние от начала координт до заданной точки: "<<d;
	}
};
int main()
{
	setlocale(LC_ALL, "Rus");
	A a;
	double x, y;
	cout << "Введите координату x: ";
	cin >> x;
	cout << "Введите координату y: ";
	cin >> y;
	a.distance(x, y);
	a.Print();
	
}