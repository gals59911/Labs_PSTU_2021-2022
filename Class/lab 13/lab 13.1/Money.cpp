#include <iostream>
#include "Money.h"
using namespace std;

	Money :: Money() {
		this->rub = 0;
		this->kop = 0;
	}
	Money :: Money(long rub, int kop)
	{
		this->rub = rub;
		this->kop = kop;
	}
	Money:: Money (const Money& k)
	{
		this->rub = k.rub;
		this->kop = k.kop;
	}
	Money :: ~Money() {}
	void Money :: Set_r(long rub) { this->rub = rub; }
	void Money :: Set_k(int kop) { this->kop = kop; }
	long Money ::  Get_r() { return this->rub; }
	int Money :: Get_k() { return this->kop; }
	Money& Money :: operator =(const Money& p) { if (&p == this) { return *this; }rub = p.rub; kop = p.kop; return *this; }
	Money Money :: operator +(const Money& other)
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
	Money Money :: operator -(const Money& other)
	{
		Money k;
		
		if (other.kop > this->kop)
		{
			k.rub = this->rub - other.rub;
			k.kop = this->kop+100 - other.kop;
		}
		else {
			k.rub = this->rub - other.rub;
			k.kop = this->kop - other.kop;
		}
		return k;
	}
	bool Money :: operator >(const Money& other) {
		if (this->rub > other.rub)
		{
			return true;
		}
		else if (this->kop > other.kop && this->rub == other.rub) {
			return true;
		}
		else {
			return false;
		}
	}
	bool Money :: operator <(const Money& other) {
		if (this->rub < other.rub)
		{
			return true;
		}
		else if (this->kop < other.kop && this->rub == other.rub) {
			return true;
		}
		else {
			return false;
		}
	}
	bool Money :: operator ==(const Money& other) {
		if (this->rub == other.rub && this->kop == other.kop)
		{
			return true;
		}
		else {
			return false;
		}
	}
	istream& operator >>(istream& in, Money& p) {
		cout << "Rub: ";  in >> p.rub;
		cout << "Kop: "; in >> p.kop;
		return in;
	}
	ostream& operator <<(ostream& out, const Money& p) {
		return (out << p.rub << "," << p.kop);
	}