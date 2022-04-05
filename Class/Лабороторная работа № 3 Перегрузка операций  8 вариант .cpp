#include <iostream>
using namespace std;
class Money {
private:
	long rub;
	int kop;
public:
	Money() {
		this->rub = 0;
		this->kop = 0;
	}
	Money(long rub, int kop)
	{
		this->rub = rub;
		this->kop = kop;
	}
	Money(const Money& k)
	{
		this->rub = k.rub;
		this->kop = k.kop;
	}
	~Money() {}
	void Set_r(long rub) { this->rub = rub; }
	void Set_k(int kop) { this->kop = kop; }
	long Get_r() { return this->rub; }
	int Get_k() { return this->kop; }
	Money& operator =(const Money& p) { if (&p == this) { return *this; }rub = p.rub; kop = p.kop; return *this; }
	Money operator +(const Money& other)
	{
		Money k;
		k.rub = this->rub + other.rub;
		k.kop = this->kop + other.kop;
		if (k.kop >= 100)
		{
			int ost = k.kop / 100;
			k.rub = k.rub + ost;
			k.kop = k.kop - ost * 100;
			
		}
		return k;
	}
	bool operator >(const Money& other) {
		if (this->rub > other.rub)
		{
			return true;
		}
		else if(this->kop>other.kop && this->rub == other.rub) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator <(const Money& other) {
		if (this->rub < other.rub)
		{
			return true;
		}
		else if(this->kop<other.kop && this->rub == other.rub) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator ==(const Money& other) {
		if (this->rub == other.rub && this->kop == other.kop)
		{
			return true;
		}
		else {
			return false;
		}
	}
	friend istream& operator >>(istream& in, Money& p) {
		cout << "Рубли: ";  in >> p.rub;
		cout << "Копейки: "; in >> p.kop;
		return in;
	}
	friend ostream& operator <<(ostream& out, const Money& p) {
		return (out << p.rub << "," << p.kop);
	}
};

int main() {
	setlocale(LC_ALL, "Rus");
	Money sum1;
	cin >> sum1;
	cout <<"Первая сумма: "<< sum1 << endl;
	Money sum2(41241,12);
	cout << "Вторая сумма: " << sum2 << endl;
	bool bol = sum1 > sum2;
	bool mal = sum1 < sum2;
	bool r = sum1 == sum2;
	if (bol == 1)
	{
		cout << sum1 << ">" << sum2 << endl;
	}
	if (mal == 1)
	{
		cout << sum1 << "<" << sum2 << endl;
	}
	if (r == 1)
	{
		cout << sum1 << "=" << sum2 << endl;
	}
	sum1 = sum2;
	cout <<"Первая сумма равная второй: "<< sum1 << endl;
	Money sum3 = sum1 + sum2; 
	cout <<"Сумма двух сумм: "<< sum3 << endl;
	Money kop = sum1;
	cout <<"Скоприванная сумма: "<< kop << endl;
}

