#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <iostream>
using namespace std;

struct pokypatel
{
    string f, i, o;
    string a;
    string nt;
    string nk;
};

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    ofstream p;
    p.open("t.txt");
    pokypatel Ivan = { "Галавтдинов","Иван","Сергеевич","ул.Льва Толстого 23-51","89125817918","1111 2222 3333 4444" };
    pokypatel Peter = { "Печкин","Петя","Иванович","ул.Ломоносового 25-100","89345917918","1290 3222 4353 2444" };
    pokypatel Sergey = { "Иванов","Сергей","Андреевич","ул.Сталина 21-10","89345956918","1291 3422 4333 2544" };
    pokypatel Dima = { "Васильев","Дмитрий","Антонович","ул.Пятилетки 10-23","89345917818","1291 3221 4353 2444" };
    int n = 4;
    pokypatel* pokypatels = new pokypatel[4];
    pokypatels[0] = Ivan;
    pokypatels[1] = Peter;
    pokypatels[2] = Sergey;
    pokypatels[3] = Dima;

    if (!p.is_open())
    {
       cout<< "Ошибка открытия файла!";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            p << "Фамилия: " << pokypatels[i].f << endl << "Имя: " << pokypatels[i].i << endl << "Отчество: " << pokypatels[i].o << endl << "Адрес: " << pokypatels[i].a << endl << "Номер телефона: " << pokypatels[i].nt << endl << "Номер карточки: " << pokypatels[i].nk << "\n\n";
        }
    }
    p<< "Преобразовнный файл" << endl;
    p << "Фамилия: " << pokypatels[3].f << endl << "Имя: " << pokypatels[3].i << endl << "Отчество: " << pokypatels[3].o << endl << "Адрес: " << pokypatels[3].a << endl << "Номер телефона: " << pokypatels[3].nt << endl << "Номер карточки: " << pokypatels[3].nk << "\n\n";
    if (!p.is_open())
    {
        cout << "Ошибка открытия файла!";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            p << "Фамилия: " << pokypatels[i].f << endl << "Имя: " << pokypatels[i].i << endl << "Отчество: " << pokypatels[i].o << endl << "Адрес: " << pokypatels[i].a << endl << "Номер телефона: " << pokypatels[i].nt << endl << "Номер карточки: " << pokypatels[i].nk << "\n\n";
        }
    }
    p.close();

}