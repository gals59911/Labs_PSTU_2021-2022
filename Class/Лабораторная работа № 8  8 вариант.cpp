#include <iostream>
using namespace std;
const int evNothing = 0;
const int evMessage = 100;
const int cmAdd = 1;
const int cmDel = 2;
const int cmGet = 3;
const int cmShow = 4;
const int cmMake = 6;
const int cmOut = 101;
struct TEvent {
	int w;
	union {
		int com;
		struct {
			int mes;
			int a;
		};
	};
};
class Object {
public:
	Object();
	virtual void Show() = 0;
	virtual void Input() = 0;
	virtual ~Object();
	virtual void HandleEvent(const TEvent& event) = 0;
};
Object::Object() = default;

Object::~Object() = default;
class Person : public Object {
protected:
	string name;
	int age;
public:
	Person();
	Person(string, int);
	Person(const Person&);
	string get_name();
	int get_age();
	void set_name(string newname);
	void set_age(int newage);
	Person& operator =(const Person&);
	virtual ~Person();
	void Show() override;
	void Input() override;
	virtual void HandleEvent(const TEvent& e);
};
Person :: ~Person() {

}
Person::Person() {
	name = "";
	age = 0;
}
Person::Person(string n, int a)
{
	name = n;
	age = a;
}
Person::Person(const Person & p)
{
	name = p.name;
	age = p.age;
}
string Person::get_name() {
	return name;
}
int Person::get_age() {
	return age;
}
void Person::set_name(string newname) {
	name = newname;
}
void Person::set_age(int newage) {
	age = newage;
}
Person& Person :: operator =(const Person & a) {
	if (&a == this) {
		return *this;
	}
	name = a.name;
	age = a.age;
	return *this;
}
void Person::Show() {
	cout << "\nИмя: " << name;
	cout << "\nВозраст: " << age;
	cout << "\n";
}
void Person::Input()
{
	cout << "\nИмя: "; cin >> name;
	cout << "\nВозраст: "; cin >> age;
}
void Person::HandleEvent(const TEvent & e) {
	if (e.w == evMessage)
	{
		switch (e.com)
		{
		case cmGet:
			cout << "name=" << get_name() << endl;
			break;
		}
	}
}
class Abiturient : public Person {
protected:
	int bal;
	string special;
public:
	Abiturient();
	~Abiturient();
	Abiturient(const Abiturient&);
	Abiturient(string, int, int, string);
	void Show() override;
	void Input() override;
	int get_bal();
	string get_special();
	void set_bal(int newbal);
	void set_special(string newspecial);
	Abiturient& operator =(const Abiturient&);
};
Abiturient::Abiturient() {
	bal = 0;
	special = "";
}
Abiturient::Abiturient(string name, int age, int b, string s) : Person(name, age) {
	bal = bal;
	special = s;
}
Abiturient::Abiturient(const Abiturient & a) {
	name = a.name;
	age = a.age;
	bal = a.bal;
	special = a.special;
}
Abiturient :: ~Abiturient() {

}
void Abiturient::Show() {
	cout << "\nИмя: " << name;;
	cout << "\nВозраст: " << age;
	cout << "\nКоличестов баллов: " << bal;
	cout << "\nСпециальность: " << special;
}
void Abiturient::Input() {
	cout << "\nИмя: "; cin >> name;
	cout << "\nВозраст: "; cin >> age;
	cout << "\nКолличество баллов: "; cin >> bal;
	cout << "\nСпециальность: "; cin >> special;
}
void Abiturient::set_special(string newspecial) {
	special = newspecial;
}
void Abiturient::set_bal(int newbal) {
	bal = newbal;
}
int Abiturient::get_bal() {
	return bal;
}
string Abiturient::get_special() {
	return special;
}
Abiturient& Abiturient ::  operator =(const Abiturient & a) {
	if (&a == this) {
		return *this;
	}
	name = a.name;
	age = a.age;
	bal = a.bal;
	special = a.special;
	return *this;
}
class List : public Abiturient {
protected:
	Object** beg;
	int size;
	int cur;
public:
	List();
	List(int);
	List(const List&);
	~List();
	void Add();
	void Delete();
	void Show();
	int operator()();
	virtual void HandleEvent(const TEvent& e);
};
List::List() {
	beg = 0;
	size = 0;
	cur = 0;
}
List::List(int n) {
	beg = new Object * [n];
	size = n;
	cur = 0;
}
List::List(const List & a) {
	beg = a.beg;
	size = a.size;
	cur = a.cur;
}
List:: ~List() {
	if (beg != 0) {
		delete[] beg;
	}
	beg = 0;
}
void List::Add() {
	Object* p;
	cout << "1.Person" << endl;
	cout << "2.Abiturient" << endl;
	cout << "Enter command.num: " << endl;
	int y;
	cin >> y;
	if (y == 1)//добавление объекта класса Print
	{
		Person* a = new (Person);
		a->Input();//ввод значений атрибутов
		p = a;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else
		if (y == 2)
		{
			Abiturient* b = new (Abiturient);
			b->Input();
			p = b;
			if (cur < size)
			{
				beg[cur] = p;
				cur++;
			}
		}
		else { return; }
}
void List::Show()
{
	if (cur == 0)
	{
		cout << "Empty" << endl;
		Object** p = beg;//указатель на указатель типа Object
		for (int i = 0; i < cur; i++)
		{
			(*p)->Show();//вызов метода Show() (позднее связывание)
			p++;//передвигаем указатель на следующий объект
		}
	}
}
int List::operator()()
{
	return cur;
}
void List::Delete()
{
	if (cur == 0)
	{
		return;
	}
	cur--;
}
void List::HandleEvent(const TEvent & e)
{
	if (e.w == evMessage)
	{
		Object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->HandleEvent(e);
			p++;
		}
	}
}
class Dialog : public List
{
protected:
	int EndState;
public:
	Dialog();//конструктор
	virtual ~Dialog();//деструктор
	virtual void GetEvent(TEvent& event);//получить событие
	virtual int Execute();//главный цикл обработки событий
	virtual void HandleEvent(TEvent& event);//обработчик
	virtual void ClearEvent(TEvent& event);//очистить событие
	int Valid();//проверка атрибута EndState
	void EndExec();//обработка события "конец работы"
};
//конструктор
Dialog::Dialog() :List()
{
	EndState = 0;
}
//деструктор
Dialog::~Dialog() {}
//получение события
void Dialog::GetEvent(TEvent & event)
{
	string OpInt = "+-szqam";//строка содержит коды операции
	string s;
	string param;

	char code;
	cout << '>';
	cin >> s; code = s[0];//первый символ команды
	if (OpInt.find(code) >= 0)//является ли символ кодом операции
	{
		event.w = evMessage;

		switch (code)
		{
		case 'm'://создать группу
			event.com = cmMake;
			break;
		case '+'://добавить объект в группу
			event.com = cmAdd;
			break;
		case '-'://удалить объект из группы
			event.com = cmDel;
			break;
		case 's'://вывести список
			event.com = cmShow;
			break;
		case 'z'://вывести атрибуты 1 объекта
			event.com = cmGet;
			break;
		case 'q'://выход
			event.com = cmOut;
			break;
		}

		if (s.length() > 1) //выделяем параметры команды, ели они есть 
		{
			param = s.substr(1, s.length() - 1);
			int A = atoi(param.c_str());//преобразуем параметр в число
			event.a = A;//записываем в сообщение
		}
	}
	else
	{
		event.w = evNothing;//пустое событие
	}
}
//Главный цикл обработки событий 
int Dialog::Execute()
{
	TEvent event;
	do
	{
		EndState = 0;
		GetEvent(event);//получить событие
		HandleEvent(event);//обработать событие
	} while (!Valid());
	return EndState;
}

void Dialog::ClearEvent(TEvent & event)
{
	event.w = evNothing;//пустое событие
}

int Dialog::Valid()
{
	if (EndState == 0)
	{
		return 0;
	}
	else { return 1; }
}

void Dialog::EndExec()
{
	EndState = 1;
}

void Dialog::HandleEvent(TEvent & event)
{
	if (event.w == evMessage)
	{
		switch (event.com)
		{
		case cmMake://создание группы
			size = event.a;//размер группы
			beg = new Object * [size];//выделяем память под массив указателей
			cur = 0;
			ClearEvent(event);//очищаем событие
			break;
		case cmAdd://добавление
			Add();
			ClearEvent(event);
			break;
		case cmGet:

		case cmDel:
			Delete();//удаление
			ClearEvent(event);
			break;
		case cmShow:
			Show();//просмотр
			ClearEvent(event);
			break;
		case cmOut:
			EndExec();//выход
			ClearEvent(event);
			break;
		default:
			HandleEvent(event);
		};
	};
}
int main()
{
	setlocale(LC_ALL, "RUS");


	Person* a = new Person;//создаём объект класса Print
	a->Input();
	Abiturient* b = new Abiturient;//создаём объект класса Magazin
	b->Input();

	List l(10);//создаём List
	l.Add();//добавляем объект в List (1)
	l.Add();//добавляем объект в List (2)
	l.Show();//вывод List
	l.Delete();//удаление элемента
	cout << endl << "List size= " << l();
	cout << "Код-команды:\n";
	cout << "Введите m1(Person) или m2(Abiturient) для работы" << endl;
	Dialog D;
	D.Execute();
	return 0;
}

