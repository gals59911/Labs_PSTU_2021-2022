#include <iostream>
using namespace std;
template <class T>
class Set {
private:
	int size;
	T* arr;
public:
	Set( int& size) {
		if (size < 0 || size == 0)
		{
			cout << "Указаный размер недопустим" << endl;
	}
		else {
			arr = new T[size];
			this->size = size;
		}
	}
	T& operator [](const int& i) {
		if (i<0 || i>size)
		{
			cout << "Ошибка" << endl;
		}
		else {
			return arr[i];
		}
	}
	bool operator ==(const T& i)
	{
		return *arr == i;
	}
	bool operator >(T& num) {
		for (int i = 0; i < size; i++)
		{
			if (num == arr[i])
			{
				return true;
			}
		}
		return false;
	}
	friend ostream& operator <<(ostream& out, const Set<T>& set) {
		for (int i = 0; i < set.size; i++)
		{
			out << set.arr[i] << endl;
		}
		return out;
	}
	friend istream& operator >> (istream& in, Set<T>& set) {
		for (int i = 0; i < set.size; i++)
		{
			in >> set.arr[i];
		}
		return in;
	}
	Set<T>& operator = (const Set<T>& set) {
		if (this == &set) {
			return *this;
		}
		if (arr != 0)
		{
			delete[] arr;
		}
		size = set.size;
		arr = new T[size];
		for (int i = 0; i < size; i++) {
			arr[i] = set.arr[i];
		}
		return *this;
	}
	~Set() 
	{

	}
};
class Money {
private:
	long int rub;
	int kop;
	int sum;
public:
	Money()
	{
		rub = 0;
		kop = 0;
	}
	Money(const long int& rub, const int& kop) {
		this->rub = rub;
		this->kop = kop;
	}
	Money(const Money& money)
	{
		rub = money.rub;
		kop = money.kop;
	}
	bool operator == (const Money& r)
	{
		return ((rub == r.rub) && (kop = r.kop));
	}
	friend ostream& operator << (ostream& out,  Money& money)
	{
		if (money.kop > 100)
		{
			int k = money.kop / 100;
			money.kop = money.kop;
			money.rub = money.rub + k;
			return (out << "Сумма: " << money.rub << "," << money.kop << endl);
		}
		else {
			return (out << "Сумма: " << money.rub << "," << money.kop << endl);
		}
	}
	friend istream& operator >> (istream& in, Money& money)
	{
		
		cout << "Введите количество рублей: ";
		in >> money.rub;
		cout << "Введите количество копейк: ";
		in >> money.kop;
		return in;
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	int size, i_l, i_r, n_i;
	cout << "Введите количество элементов множества: ";
	cin >> size;
	Set <int> set_int(size);
	if (size > 0)
	{
		cout << "Введите целые числа:" << endl;
		cin >> set_int;
		cout << "Содержимое множества:" << endl;
		cout << set_int << endl;
		cout << "Введите индекс левого операнда: ";
		cin >> i_l;
		cout << "Введите индекс правого операнда: ";
		cin >> i_r;
		if ((set_int[i_l] == set_int[i_r]==1))
		{
			cout << "Равны" << endl;
		}
		else {
			cout << "Не равны" << endl;
		}
		cout << "Введите число: ";
		cin >> n_i;
		if (set_int > n_i)
			cout << n_i << " содержится во множестве" << endl;
		else
			cout << n_i << " отсутствует во множестве" << endl;
	}
	cout << "Введите количество элементов множества: ";
	cin >> size;
	Set <float> set_float(size);
	float n;
	if (size > 0)
	{
		cout << "Введите целые числа:" << endl;
		cin >> set_float;
		cout << "Содержимое множества:" << endl;
		cout << set_float << endl;
		cout << "Введите индекс левого операнда: ";
		cin >> i_l;
		cout << "Введите индекс правого операнда: ";
		cin >> i_r;
		if ((set_float[i_l] == set_float[i_r] == 1))
		{
			cout << "Равны" << endl;
		}
		else {
			cout << "Не равны" << endl;
		}
		cout << "Введите число: ";
		cin >> n;
		if (set_float > n)
			cout << n << " содержится во множестве" << endl;
		else
			cout << n << " отсутствует во множестве" << endl;
	}
	cout << "Введите количество элементов множества: ";
	cin >> size;
	Set <double> set_double(size);
	double n1;
	if (size > 0)
	{
		cout << "Введите целые числа:" << endl;
		cin >> set_double;
		cout << "Содержимое множества:" << endl;
		cout << set_double << endl;
		cout << "Введите индекс левого операнда: ";
		cin >> i_l;
		cout << "Введите индекс правого операнда: ";
		cin >> i_r;
		if ((set_double[i_l] == set_double[i_r] == 1))
		{
			cout << "Равны" << endl;
		}
		else {
			cout << "Не равны" << endl;
		}
		cout << "Введите число: ";
		cin >> n1;
		if (set_double > n1)
			cout << n1 << " содержится во множестве" << endl;
		else
			cout << n1 << " отсутствует во множестве" << endl;
	}
	cout << "Введите количество элементов множества: ";
	cin >> size;
	Set<Money> set_money(size);
	if (size>0) {
		cout << "Введите элементы множества:" << endl;
		cin >> set_money;
		cout << "Содержимое множества:" << endl;
		cout << set_money << endl;
		cout << "Введите индекс левого операнда: ";
		cin >> i_l;
		cout << "Введите индекс правого операнда: ";
		cin >> i_r;
		if ((set_int[i_l] == set_int[i_r] == 1))
		{
			cout << "Равны" << endl;
		}
		else {
			cout << "Не равны" << endl;
		}
		Money money;
		cin >> money;
		if (set_money > money)
			cout << "Элемент " << money << " содержится во множестве" << endl;
		else
			cout << "Элемент " << money << " отсутствует во множестве" << endl;
	}
	return 0;
}