#include <iostream>
using namespace std;
class stack
{
public:
	int data;
	stack* next;
	void build_stack(stack** top, int d);
	void print(stack* top);
	void addElem(stack** top);
};

void build_stack(stack** top, int d)
{
	stack* q;
	q = new stack();
	q->data = d;
	if (top == NULL)
	{
		*top = q;
	}
	else
	{
		q->next = *top;
		*top = q;
	}
}

void print(stack* top)
{
	stack* q = top;
	while (q)
	{
		cout << q->data << "\t";
		q = q->next;
	}
}

void addElem(stack** top)
{
	stack* q = *top;
	while (q != NULL)
	{
		if (q->data < 0)
		{
			stack* newel = new stack;
			newel->data = 0;
			newel->next = q->next;
			q->next = newel;
		}
		q = q->next;
	}
}

int main()
{
	int n, k;
	setlocale(LC_ALL, "Rus");
	stack* top = NULL;
	cout << "Введите количество элементов: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		build_stack(&top, k);
	}
	cout << endl;
	cout << "Текущий список: " << endl;
	print(top);
	cout << endl;
	addElem(&top);
	cout << "Измененный список: " << endl;
	print(top);
	return 0;
}