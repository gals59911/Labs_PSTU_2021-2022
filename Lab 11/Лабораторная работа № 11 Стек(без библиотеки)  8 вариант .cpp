#include <iostream>
using namespace std;
struct Node {
	string l;
	Node* ptr = nullptr;
};
struct List {
	Node* head = nullptr;
	Node* tail = nullptr;
};
void push_back(List& list, string& l)
{
	Node* n_n = new Node;
	n_n->l = l;
	if (list.head == nullptr)
	{
		list.head = n_n;
		list.tail = n_n;
	}
	else {
		n_n->ptr = list.head;
		list.head = n_n;
	}
}
int main()
{
	List list;
	List z;
	int n = 10;
	int c = 1;
	for (int i = 0; i != n; i++)
	{
		string s;
		cin >> s;
		if (i % 2 == 0)
		{
			push_back(z, s);
		}
		push_back(list, s); 
	}
	
	Node* c_n = list.head;
	Node* t = z.head;
	while (t != nullptr)
	{
		cout << t->l << " ";
		t = t->ptr;
	}
	while (c_n != nullptr)
	{
		cout << c_n->l << " ";
		c_n = c_n->ptr;
	}
}