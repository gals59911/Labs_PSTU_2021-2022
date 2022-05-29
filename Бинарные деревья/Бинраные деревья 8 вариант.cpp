#include <iostream>
using namespace std;
int key_count = 0;
int tabs = 0;
int kol_vo = 0;

struct Branch
{
	char data;
	Branch* leftbranch; 
	Branch* rightbranch;
};

void Add(char newdata, Branch*& branch)

{
	if (!branch)

	{
		branch = new Branch;
		branch->data = newdata;
		branch->leftbranch = 0;
		branch->rightbranch = 0;
		return;
	}
	else

		if (branch->data > newdata)
		{
			Add(newdata, branch->leftbranch);
		}
		else
		{
			Add(newdata, branch->rightbranch);
		};

}

void print(Branch* branch)

{
	if (!branch) return;
	tabs += 5;
	print(branch->leftbranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << branch->data << endl;
	print(branch->rightbranch);
	tabs -= 5;
	return;
}

void pr(Branch*& branch)

{

	if (NULL == branch) return;
	pr(branch->leftbranch);
	cout << branch->data << endl;
	pr(branch->rightbranch);
}


int counter(Branch*& branch, char key)

{
	if (NULL == branch) return 0;
	if (branch->data == key)
	{
		key_count++;
	}
	counter(branch->leftbranch, key);
	counter(branch->rightbranch, key);
	return key_count;
}


void add(char newdata, Branch*& branch)

{

	if (!branch)

	{
		branch = new Branch;
		branch->data = newdata;
		branch->leftbranch = 0;
		branch->rightbranch = 0;
		return;

	}

	else

	{

		if (newdata < branch->data) {
			add(newdata, branch->leftbranch);
		}

		else if (newdata> branch->data) {
			add(newdata, branch->rightbranch);
		}

	}

}

void is_Empty(Branch*& branch)

{

	if (!branch)

	{
		cout << "Дерево пустое";
	}

	else

	{
		cout << "Дерево не пустое";
	}

}

void FreeTree(Branch* branch)

{

	if (!branch) return;
	FreeTree(branch->leftbranch);
	FreeTree(branch->rightbranch);
	delete branch;
	return;

}

Branch* del(Branch*& branch, char newdata)
{
	if (branch == NULL)
		return branch;
	if (newdata == branch->data)
	{
		Branch* tmp;
		if (branch->rightbranch == NULL)
			tmp = branch->leftbranch;
		else
		{
			Branch* ptr = branch->rightbranch;
			if (ptr->leftbranch == NULL)
			{
				ptr->leftbranch = branch->leftbranch;
				tmp = ptr;
			}
			else
			{
				Branch* pmin = ptr->leftbranch;
				while (pmin->leftbranch != NULL) {
					ptr = pmin;
					pmin = ptr->leftbranch;
				}
				ptr->leftbranch = pmin->rightbranch;
				pmin->leftbranch = branch->leftbranch;
				pmin->rightbranch = branch->rightbranch;
				tmp = pmin;
			}

		}

		delete branch;

		return tmp;

	}

	else if (newdata < branch->data)

		branch->leftbranch = del(branch->leftbranch, newdata);

	else

		branch->rightbranch = del(branch->rightbranch, newdata);

	return branch;

}

int main()

{

	setlocale(LC_ALL, "rus");
	char key;
	Branch* Root = 0;
	int vel;
	char element;
	char elem;
	cout << "Введите кол-во элементов для будущего дерева: ";
	cin >> vel;
	cout << endl;
	for (int i = 0; i < vel; i++)

	{
		cin >> elem;
		Add(elem, Root);
	}
	cout << "Проверим дерево на пустоту после его заполнения: " << endl;
	is_Empty(Root);
	cout << endl;
	cout << "Вывод бинарного дерева: " << endl;
	print(Root);
	cout << endl;
	cout << "Прямой обход бинарного дерева: " << endl;
	pr(Root);
	cout << endl;
	cout << "Добавим новый элемент в бинарное дерево:" << endl;
	cout << "Введите новый элемент: ";
	cin >> element;
	add(element, Root);
	cout << "Вывод бинарного дерева: " << endl;
	print(Root);
	cout << endl;
	cout << "Удалим элемент из бинарного дерева:" << endl;
	cout << "Введите элемент: ";
	cin >> element;
	del(Root, element);
	cout << "Вывод бинарного дерева: " << endl;
	print(Root);
	cout << endl;
	cout << "Введите ключ:" << endl;
	cin >> key;
	counter(Root, key);
	cout << "Посчитаем кол-во подходящих: " << key_count << endl;
	FreeTree(Root);
}