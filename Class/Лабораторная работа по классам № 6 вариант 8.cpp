#include <iostream>
using namespace std;
class Iterator {
	friend class Set;

private:	
	int* element;
public:
	Iterator() {
		element = 0;
	}
	Iterator(const Iterator& a) {
		element = a.element;
	}
	void operator + (const int& n) {
		for (int i = 0; i < n; i++)
			++element;
	}
	void operator ++ () { ++element; }
	void operator --() {--element; }
	bool operator == (const Iterator& iterator) { return (*element == *iterator.element); }
	bool operator != (const Iterator& iterator) { return !(*element == *iterator.element); }
	int& operator *() 
	{
		return  *element;
	}
};

class Set {
private:
	int size;
	int* arr;
	Iterator beg;
	Iterator end;
public:
	Set(int size) {
		this->size = size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 96;
		}
		beg.element = &arr[0];
		end.element = &arr[size];
	}
	int& operator [](const int& i) {
		if (i<0 || i>size)
		{
			cout << "Ошибка" << endl;
		}
		else {
			return arr[i];
		}
	}
	bool operator ==(const int& i)
	{
		return *arr == i;
	}
	bool operator >( int& num) {
		for (int i = 0; i < size; i++)
		{
			if (num == arr[i])
			{
				return true;
			}
		}
		return false;
	}
	friend ostream& operator <<(ostream& out, const Set& set) {
		for (int i = 0; i < set.size; i++)
		{
			out << i<<set.arr[i] << endl;
		}
		return out;
	}
	friend istream& operator >> (istream& in, Set& set) {
		for (int i = 0; i < set.size; i++)
		{
			in >> set.arr[i];
		}
		return in;
	}
	Iterator first() { return beg; }
	Iterator last() { return end; }
	Set& operator = (const Set& set) {
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
		beg = set.beg;
		end = set.end;
		return *this;
	}
	int& operator( ) (){
		return size;
	}
	~Set() {

	}

};
int main() {
	setlocale(LC_ALL, "Rus");
	int index;
	int size;
	Iterator iter;
	cout << "Задайте размер: ";
	cin >>size;
	Set a(size);
	for (iter = a.first(); iter != a.last(); ++iter)
	{
		cout << *iter << ", ";
	}
	cout << endl << "Определение размера множества a: " << a() << endl;
	cout << endl << "Задайте индекс для поиска: " << endl;
	cin >> index;
	if (index >= 0 && index < size)
	{
		cout << "Доступ по заданному индексу: " << a[index] << endl;
	}
	else {
		cout << endl << "Доступа по заддоному индексу невозможен" << endl;
	}
	cout << endl;
	int n;
	cout << "Введите элемент: " << endl;
	cin >> n;
	for (int i = 0; i < size; i++)
	{
		if (n == *iter)
		{
			--iter;
			cout << "Элемент слева от элемента " << " " << n << ": " << *iter << endl;
		}
		else {
			--iter;
		}
	}
	int n1;
	cin >> n1;
	if (a > n1 ==true)
	{
		cout << n1 << " содержится во множестве" << endl;
	}
	else {
		cout << n1 << " не содержится во множестве" << endl;
	}
	int set_index1, set_index2;
	cout << "Введите индекс левого операнда: ";
	cin >> set_index1;
	cout << "Введите индекс правого операнда: ";
	cin >> set_index2;
	Iterator iterator1;
	Iterator iterator2;
	iterator1 = a.first();
	iterator2 = a.first();
	iterator1 + set_index1;
	iterator2 + set_index2;
	cout << *iterator1 << " == " << *iterator2 << " = " << (iterator1 == iterator2) << endl;
}