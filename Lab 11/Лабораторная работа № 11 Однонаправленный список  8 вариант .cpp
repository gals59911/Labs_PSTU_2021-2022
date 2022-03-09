#include <iostream>
using namespace std;
struct Node {
	char l;
	Node* ptr=nullptr;
};
struct List {
	Node* head = nullptr;
	Node* tail = nullptr;
};
void push_back(List& list, const char& l)
{
	Node* n_n = new Node;
	n_n->l = l;
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
int main()
{
	List list;
	int n = 5;
	for (int i = 0; i !=n; i++)
	{
		char s;
		cin >> s;
		push_back(list,s);
	}
	int c=1;
	Node* c_n = list.head;
	while (c_n != nullptr)
	{
		if ((c % 2 != 0) && (c<=n))
		{
			push_back(list,c_n->l);
		}
		cout << c_n->l << " ";
		c_n = c_n->ptr;
		c++;
	}
}