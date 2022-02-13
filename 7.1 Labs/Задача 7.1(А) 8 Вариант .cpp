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
	if (a == 0) { return "Год Обезьяны"; }
	if (a == 1) { return "Год Петуха"; }
	if (a == 2) { return "Год Собаки"; }
	if (a == 3) { return "Год Свиньи"; }
	if (a == 4) { return "Год Крысы"; }
	if (a == 5) { return "Год Коровы"; }
	if (a == 6) { return "Год Тигра"; }
	if (a == 7) { return "Год Зайца"; }
	if (a == 8) { return "Год Дракона"; }
	if (a == 9) { return "Год Змеи"; }
	if (a == 10) { return "Год Лошади"; }
	if (a == 11) { return "Год Овцы"; }

}
int main()
{
	int Year;
	cin >> Year;
	char a = ost(Year);
	cout << Year << " " << ost(a) << endl;