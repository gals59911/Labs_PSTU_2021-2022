#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* p_p = nullptr;
	Node* p_n = nullptr;
};

struct List
{
	Node* head = nullptr;
	Node* tail = nullptr;
};

void pushBack(List& list, int& data)
{
	Node* newnode = new Node;
	newnode->data = data;
	if (list.head == nullptr)
	{
		list.head = newnode;
		list.tail = newnode;
	}
	else
	{
		newnode->p_p = list.tail;
		list.tail->p_n = newnode;
		list.tail = newnode;
	}

}

void printList(List& list)
{
	Node* currentnode = list.head;
	while (currentnode != nullptr)
	{
		cout << currentnode->data << " ";
		currentnode = currentnode->p_n;
	}
	cout << endl;
}

void del(Node* d)
{
	d->p_p->p_n = d->p_n;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	List list;
	int n, ch,c=0;
	cout << "Введите размер списка: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> ch;
		pushBack(list, ch);
	}
	printList(list);
	Node* d = list.tail;
	while (c != 1)
	{
		
		if ((d->data) % 2 == 0)
		{
			del(d);
			c++;
			
		}
		d = d->p_p;
	}
	printList(list);

}