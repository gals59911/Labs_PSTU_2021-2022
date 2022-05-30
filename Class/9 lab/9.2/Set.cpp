#include <iostream>
#include "Set.h"
#include "error.h"
using namespace std;
	Set :: Set (int s) {
		if (s > max_size) throw error("Set lenght more than MAXSIZE\n");
		this->size = s;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 96;
		}
	}
	int Set ::  operator [](const int& i) {
		if (i < 0) throw error("index<0");
		if (i > size) throw error("index>size");
		return arr[i];
	}
	bool Set ::  operator ==(const int& i)
	{
		return *arr == i;
	}
	bool Set :: operator >(int& num) {
		for (int i = 0; i < size; i++)
		{
			if (num == arr[i])
			{
				return true;
			}
		}
		return false;
	}
	ostream& operator <<(ostream& out, const Set& set) {
		if (set.size == 0) out << "Empty";
		else
		for (int i = 0; i < set.size; i++)
		{
			out<< set.arr[i] << endl;
		}
		return out;
	}
	istream& operator >> (istream& in, Set& set) {
		for (int i = 0; i < set.size; i++)
		{
			in >> set.arr[i];
		}
		return in;
	}
	Set& Set :: operator = (const Set& set) {
		if (this == &set) {
			return *this;
		}
		if (arr != 0)
		{
			delete[] arr;
		}
		size = set.size;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = set.arr[i];
		}
		return *this;
	}
	int Set :: operator( ) () {
		return size;
	}
	Set :: ~Set() {

	}
	int Set :: operator - (const int& i) {
		if (i <= 0) throw error("index<=0");
		return arr[i-1];
	}