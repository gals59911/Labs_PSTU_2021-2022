#include <iostream>
using namespace std;
int ost(int Year)
{
	int a;
	a = Year % 12;
	return a;
}
string ost(char a)
{
	setlocale(LC_ALL, "Rus");
	if (a == 0) { return "��� ��������"; }
	if (a == 1) { return "��� ������"; }
	if (a == 2) { return "��� ������"; }
	if (a == 3) { return "��� ������"; }
	if (a == 4) { return "��� �����"; }
	if (a == 5) { return "��� ������"; }
	if (a == 6) { return "��� �����"; }
	if (a == 7) { return "��� �����"; }
	if (a == 8) { return "��� �������"; }
	if (a == 9) { return "��� ����"; }
	if (a == 10) { return "��� ������"; }
	if (a == 11) { return "��� ����"; }

}
int main()
{
	int Year;
	cin >> Year;
	char a = ost(Year);
	cout << Year << " " << ost(a) << endl;