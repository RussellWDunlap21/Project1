#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct node
{
	int data;
	node *next;
}*front = NULL, *rear = NULL, *p = NULL, *np = NULL;
void push(int x)//Push the stack
{
	np = new node;
	np->data = x;
	np->next = NULL;
	if (front == NULL)
	{
		front = rear = np;
		rear->next = NULL;
	}
	else
	{
		rear->next = np;
		rear = np;
		rear->next = NULL;
	}
}
int Pop()//Pop the stack and checking if it is empty
{
	int x;
	if (front == NULL)
	{
		cout << "empty queue\n";
	}
	else
	{
		p = front;
		x = p->data;
		front = front->next;
		delete(p);
		return(x);
	}
}
int main()
{
	int stackSize, counter = 0, x;
	cout << "Enter the number of values to be pushed into stack: ";//Size of stack
	cin >> stackSize;
	while (counter < stackSize)
	{
		cout << "Enter the value to be entered into stack: ";//Pushing elements into stack
		cin >> x;
		push(x);
		counter++;
	}
	cout << "\n\nPoped Values\n\n";//Popping elements form the stack
	while (true)
	{
		if (front != NULL)
			cout << Pop() << endl;
		else
			break;
	}
	_getch();
}