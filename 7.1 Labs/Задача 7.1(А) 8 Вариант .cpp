#include <iostream>
using namespace std;
double whatZ(string m)
{
	double d;
	if (m == "January") { d = 0.01; return d; }
	if (m == "February") { d = 0.02; return d; }
	if (m == "March") { d = 0.03; return d; }
	if (m == "April") { d = 0.04; return d; }
	if (m == "May") { d = 0.05; return d; }
	if (m == "June") { d = 0.06; return d; }
	if (m == "July") { d = 0.07; return d; }
	if (m == "August") { d = 0.08; return d; }
	if (m == "September") { d = 0.09; return d; }
	if (m == "October") { d = 0.10; return d; }
	if (m == "November") { d = 0.11; return d; }
	if (m == "December") { d = 0.12; return d; }
}
string whatZ(int ch, double d)
{
	if ((d == 0.02) && (ch >= 19 && ch <= 29) || ((d == 0.03) && ( ch <= 20))) { return "Fishes"; }
	if ((d == 0.01) && (ch >= 21 && ch <= 31) || ((d == 0.02) && (ch <= 18))) { return "Aquarius"; }
	if ((d == 0.12) && (ch >= 22 && ch <= 31) || ((d == 0.01) && (ch <= 20))) { return "Capricorn"; }
	if ((d == 0.11) && (ch >= 23 && ch <= 30) || ((d == 0.12) && (ch <= 21))) { return "Sagittarius"; }
	if ((d == 0.10) && (ch >= 24 && ch <= 31) || ((d == 0.11) && (ch <= 22))) { return "Scorpion"; }
	if ((d == 0.09) && (ch >= 23 && ch <= 30) || ((d == 0.10) && (ch <= 23))) { return "Scales"; }
	if ((d == 0.08) && (ch >= 23 && ch	<= 31) || ((d == 0.09) && (ch <= 22))) { return "Virgo"; }
	if ((d == 0.07) && (ch >= 23 && ch <= 31) || ((d == 0.08) && (ch <= 22))) { return "Lion"; }
	if ((d == 0.06) && (ch >= 22 && ch <= 30) || ((d == 0.07) && (ch <= 22))) { return "Cancer"; }
	if ((d == 0.05) && (ch >= 21 && ch <= 31) || ((d == 0.06) && (ch <= 21))) { return "Twins"; }
	if ((d == 0.04) && (ch >= 20 && ch <= 30) || ((d == 0.05) && (ch <= 20))) { return "Taurus"; }
	if ((d == 0.03) && (ch >= 21 && ch <= 31) || ((d == 0.04) && (ch <= 19))) { return "Aries"; }
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int ch;
	double ch1;
	string m;
	cout << "¬ведите название мес€ца на анлийском: ";
	cin >> m;
	cout << "¬ведите число мес€ца: ";
	cin >> ch;
	ch1 = whatZ(m);
	cout << whatZ(ch, ch1);
}