#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* ptr = nullptr;
};
struct List {
	Node* head = nullptr;
	Node* tail = nullptr;
};
void push_back(List& list, int& data)
{
	Node* n_n = new Node;
	n_n->data = data;
	if (list.head == nullptr)
	{
		list.head = n_n;
		list.tail = n_n;
	}
	else {
		list.tail->ptr = n_n;
		list.tail = n_n;
	}
}
void del(Node* c_n)
{
	c_n= c_n->ptr;
}
int main()
{
	List list;
	int n = 10;
	int c = 0;
	int c1 = 0;
	for (int i = 0; i != n; i++)
	{
		int s;
		cin >> s;
		if (s % 2 == 0)
		{
			c++;
		}
		push_back(list, s);
	}
	Node* c_n = list.head;
	while (c_n != nullptr)
	{
		if (c_n->data % 2 == 0)
		{
			c1++;
		}
		if (c_n->data % 2 == 0 && c1==c)
		{
			del(c_n);
		}
		else {
			cout << c_n->data << " ";
		}
		c_n = c_n->ptr;

	}
}