#pragma once
#include <iostream>
using namespace std;
class Money {
private:
	long rub;
	int kop;
public:
	Money();
	Money(long rub, int kop);
	Money(const Money& k);
	~Money();
	void Set_r(long rub);
	void Set_k(int kop);
	long Get_r();
	int Get_k();
	Money& operator =(const Money& p);
	Money operator +(const Money& other);
	Money operator -(const Money& other);
	bool operator >(const Money& other);
	bool operator <(const Money& other);
	bool operator ==(const Money& other);
	friend istream& operator >>(istream& in, Money& p);
	friend ostream& operator <<(ostream& out, const Money& p);
};
