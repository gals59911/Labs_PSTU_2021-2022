#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <Windows.h>
int h = 1;

using namespace std;
string names[50] = { "Станислав", "Сергей", "Иван", "Дмитрий", "Егор", "Александр", "Евгений", "Андрей","Артем","Вито","Данил" ,"Кирилл" ,"Вадим" ,"Антон" ,"Ренат" ,"Карл" ,"Денис" ,"Григорий" ,"Савелий" ,"Константин" ,"Ярослав" ,"Степан" ,"Артур" ,"Михаил" ,"Илья" ,"Эдик" ,"Василий" ,"Лев" ,"Никита" ,"Тимур" ,"Ринат" ,"Валера" ,"Борис" ,"Владислав" ,"Игорь" ,"Алах" ,"Леонид" ,"Максим" ,"Дауни" ,"Олег" };
string patronymic[50] = { "Сергеевич","Андреевич","Александрович","Алексеевич","Борисович","Григорьевич","Денисович","Егорович","Николаевич","Игоревич","Евгеньевич","Михайлович","Георгиевич","Акрамович","Лаврентьевич" };
string surnames[50] = { "Смирнов","Пушкин","Енчев","Ворстер","Галавтдинов","Шицин","Власов","Латынцев","Белкин","Ветчянинов","Есенин","Козловский","Хованский","Шевцов","Панасенко" };
string adress[50] = { "Льва Толстого 23", "Профессора Дедюдикина 18", "Бирюкова 28", "Ломоносова 8", "Горького 9", "Юбилейная 13", "Профессора Дедюкина 20", "Калина 3", "Краснокамская 15", "Романова 5", "Победа 1", "Квартал 3", "Ленинская 8", "Петрова 10", "Краснокамская 14" };
string pasport[50] = { "89125817719","89125817819","89225817719","89125617719","89205817719","89122217719","89121117719","89125818819","89126617719","89125817777","89125407719","89125822219","891259897719","89995817719","89125888819", };

struct Human
{
    Human()
    {
        full_name = "NULL";
        pasport = "NULL";
        adress = "NULL";

    }

    string full_name;
    string pasport;
    string adress;
};

int collisions_count = 0;

struct hash_table
{
    stack<Human>* array;
    hash_table(int size)
    {
        array = new stack<Human>[size];
    }

    ~hash_table()
    {
        delete[] array;
    }
    void add(Human temp, const int size);
    void find_index(string date_of_birth, const int size);
};

void show_info(const Human temp);
void show_hash_table(hash_table* object, const int size);
Human create_random_human();
string get_random_name(); string get_random_pasport(); string get_adress();
void print_array_humans(const Human* const array, const int size);
void fill_array_random_humans(Human* array, const int count);
int get_random_number();
int hash_function(string str, const int size);
void print_point(stack<Human> temp);
void add_point(Human x, stack<Human> temp);

void print_point(stack<Human> temp)
{

    while (!(temp.empty()))
    {
        show_info(temp.top());
        temp.pop();
    }
    cout << "\n";

}

void add_point(Human x, stack<Human> temp) {
    temp.push(x);
}

bool find_point(stack<Human> temp, string fio)
{
    while (!(temp.empty()))
    {
        if (temp.top().full_name == fio) {
            return true;
        }
        temp.pop();
    }
    return false;
}


void hash_table::find_index(string fio, const int size)
{
    int hash = hash_function(fio, size);
    int index = hash;
    bool F = false;
    F = find_point(array[index], fio);
    if (index >= size)
    {
        cout << "Человека по ФИО \"" << fio << "\" нет. \n\n";
    }
    else
    {
        if (F)
        {
            cout << "Человек с ФИО \"" << fio << "\" содержится по индексу " << index << endl << endl;
        }
        else
        {
            cout << "Человека по ФИО \"" << fio << "\" нет. \n\n";
        }
    }
}

void hash_table::add(Human temp, const int size)
{
    int index = hash_function(temp.full_name, size);
    int hash = index;
    if (!(array[index].empty()))
    {
        array[index].push(temp);
        return;
    }
    else
    {
        array[index].push(temp);
        collisions_count++;
        return;
    }
}



void show_hash_table(hash_table* table, const int size) {
    for (int i = 0; i < size; i++) {
        if (!(table->array[i].empty())) {
            print_point(table->array[i]);
        }
    }
}
int get_random_number()
{
    return rand() % 15;
}

int hash_function(string str, const int size)
{
    long double a = (0.68 * str.length());
    double a1 = size * (a - static_cast<int>(a));
    return static_cast<int>(a1);
}


void show_info(const Human temp)
{
    cout << "Элемент " << h++ << endl;
    cout << "\nФИО: " << temp.full_name
        << "\nАдрес: " << temp.adress
        << "\nНомер телефона: " << temp.pasport << endl << endl;
}


void print_array_humans(const Human* const array, const int size)
{
    for (int i = 0; i < size; i++)
    {
        show_info(array[i]);
    }
}

void fill_array_random_humans(Human* array, const int count)
{
    for (int i = 0; i < count; i++)
    {
        array[i] = create_random_human();
    }
}

string get_random_phone()
{
    return pasport[get_random_number()];
}

string get_adress()
{
    return adress[get_random_number()];
}

Human create_random_human()
{
    Human temp;
    temp.full_name = get_random_name();
    temp.pasport = get_random_phone();
    temp.adress = get_adress();
    return temp;
}

string get_random_name()
{
    return(surnames[get_random_number()] + " " + names[get_random_number()] + " " + patronymic[get_random_number()]);
}
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    do {
        cout << "Введите количество элементов в массиве (не меньше 10): ";
        cin >> size;
    } while (size < 10);
    cout << endl;
    Human* array = new Human[size];
    hash_table table(size);
    fill_array_random_humans(array, size);
    for (int i = 0; i < size; i++)
    {
        table.add(array[i], size);
    }
    show_hash_table(&table, size);

    string FindFio = "";
    string f, y, o;
    cout << "Введите фамилию искомого человека: ";
    cin >> f;
    cout << endl << endl;
    cout << "Введите имя искомого человека: ";
    cin >> y;
    cout << endl << endl;
    cout << "Введите отчество искомого человека: ";
    cin >> o;
    cout << endl << endl;
    FindFio = f + " " + y + " " + o;
    table.find_index(FindFio, size);
    cout << endl << "Количество коллизий для " << size << "  записей: " << collisions_count << endl << endl;
    delete[] array;
    return 0;
}