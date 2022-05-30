#pragma once
#include <iostream>
using namespace std;
const int max_size = 10;
class Set {
private:
	int size;
	int* arr;
public:
	Set(int size);
	int operator [](const int& i);
	bool operator ==(const int& i);
	bool operator >(int& num);
	friend ostream& operator <<(ostream& out, const Set& set);
	friend istream& operator >> (istream& in, Set& set);
	Set& operator = (const Set& set);
	int operator( ) ();
	int operator -(const int& i);
	~Set();
};
