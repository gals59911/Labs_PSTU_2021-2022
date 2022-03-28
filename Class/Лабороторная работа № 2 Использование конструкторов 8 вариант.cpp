#include <iostream>
using namespace std;
class Kvartira {
private:
	string a;
	double s;
	int c;
public:
	Kvartira()
	{
		cout << "����������� ��� ����������" << endl;
		this->a = "";
		this->s = 0;
		this->c = 0;
	}
	Kvartira(string a, double s, int c)
	{
		cout << "����������� � ����������" << endl;
		this->a = a;
		this->s = s;
		this->c = c;
	}
	Kvartira(const Kvartira& k) {
		cout << "����������� �����������" << endl;
		this->a = k.a;
		this->s = k.s;
		this->c = k.c;
	}
	void Set_a(string a) { this->a = a; }
	void Set_s(double s) { this->s = s; }
	void Set_c(int c) { this->c = c; }
	string Get_a() { return this->a; }
	double Get_s() { return this->s; }
	int Get_c() { return this->c; }
	void Print() {
		cout << "�����: " << a << endl;
		cout << "�������: " << s << endl;
		cout << "���������� ������: " << c << endl;
	}
	~Kvartira() {
		cout << "����������" << endl << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Rus");
	Kvartira k1;
	k1.Print();
	cout << endl;
	Kvartira k2("��.���� �������� 23-15", 51.23, 3);
	k2.Print();
	cout << endl;
	Kvartira k3=k2;
	k3.Print();
	cout << endl;
	k3.Set_a("��.������� 56");
	k3.Set_c(5);
	k3.Set_s(80.23);
	k3.Print();
	cout << endl;
}