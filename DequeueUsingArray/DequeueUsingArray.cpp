#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void mainMenu();
void input_restricted_dequeue();
void output_restricted_dequeue();
void push_start();
void push_end();
void pop_start();
void pop_end();
void display();

int list[5];
int front = -1;
int rear = -1;

void main()
{
	mainMenu();

	cout << endl;
	system("pause");
}


void mainMenu()
{
	system("CLS");
	cout << "1. Input Restricted Dequeue\n2. Output Restricted Dequeue\n3. Exit\n\nEnter your choice:\n";
	switch (_getch())
	{
	case '1':
		input_restricted_dequeue();
		break;
	case '2':
		output_restricted_dequeue();
		break;
	case '3':
		exit(0);
	default:
		cout << "\n\aWrong entry!!!";
		break;
	}
}
void input_restricted_dequeue()
{
	system("CLS");
	cout << "1. Insert at end\n2. Delete from start\n3. Delete from end\n4. Display\n5. Select type of Dequeue\n6. Exit\n\nEnter your choice:\n";
	switch (_getch())
	{
	case '1':
		push_end();
		break;
	case '2':
		pop_start();
		break;
	case '3':
		pop_end();
		break;
	case '4':
		display();
		break;
	case '5':
		mainMenu();
		break;
	case '6':
		exit(0);
	default:
		cout << "\n\aWrong entry!!!";
		break;
	}
}
void output_restricted_dequeue()
{
	system("CLS");
	cout << "1. Insert at start\n2. Insert at end\n3. Delete from start\n4. Display\n5. Select type of Dequeue\n6. Exit\n\nEnter your choice:\n";
	switch (_getch())
	{
	case '1':
		push_start();
		break;
	case '2':
		push_end();
		break;
	case '3':
		pop_start();
		break;
	case '4':
		display();
		break;
	case '5':
		mainMenu();
		break;
	case '6':
		exit(0);
	default:
		cout << "\n\aWrong entry!!!";
		break;
	}
}
void push_start()
{
	system("CLS");
	if (rear >= 4)
	{
		cout << "\n\aStack Overflow!";

		cout << "\n\nPress 1 to delete an item or ESCAPE to go back to Main Menu.";

		char ch = _getch();
		if (ch == 1)
			pop_start();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}

		rear++;
		int num;
		cout << "Enter integer you want to insert: ";
		cin >> num;

		list[rear] = num;

		cout << "\nItem is successfully inserted in the list!\n";

		cout << "\nNew list:";
		cout << endl;
		for (int i = front; i <= rear; i++)
		{
			cout << list[i] << " ";
		}

		cout << "\n\nPress ENTER to add more or ESCAPE to go back to Main Menu.";
		char ch = _getch();
		if (ch == 13)
			push_end();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
}
void push_end()
{
	system("CLS");
	if (rear >= 4)
	{
		cout << "\n\aStack Overflow!";

		cout << "\n\nPress 1 to delete an item or ESCAPE to go back to Main Menu.";

		char ch = _getch();
		if (ch == 1)
			pop_start();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}

		rear++;
		int num;
		cout << "Enter integer you want to insert: ";
		cin >> num;

		list[rear] = num;

		cout << "\nItem is successfully inserted in the list!\n";

		cout << "\nNew list:";
		cout << endl;
		for (int i = front; i <= rear; i++)
		{
			cout << list[i] << " ";
		}

		cout << "\n\nPress ENTER to add more or ESCAPE to go back to Main Menu.";
		char ch = _getch();
		if (ch == 13)
			push_end();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
}
void pop_start()
{
	system("CLS");
	if (front > rear || front == -1)
	{
		cout << "\n\aStack Underflow!";

		cout << "\n\nPress 1 to insert an item or ESCAPE to go back to Main Menu.";

		char ch = _getch();
		if (ch == 1)
			push_end();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
	else
	{
		int n = list[front];
		front++;

		if (front == 5)
		{
			front = -1;
			rear = -1;
		}

		cout << "\n" << n << " is successfully deleted from the list!\n";

		cout << "\nNew list:";
		cout << endl;
		for (int i = front; i <= rear; i++)
		{
			cout << list[i] << " ";
		}

		cout << "\n\nPress ENTER to delete more or ESCAPE to go back to Main Menu.";
		char ch = _getch();
		if (ch == 13)
			pop_start();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();

	}
}
void pop_end()
{
	system("CLS");
	if (front > rear || front == -1)
	{
		cout << "\n\aStack Underflow!";

		cout << "\n\nPress 1 to insert an item or ESCAPE to go back to Main Menu.";

		char ch = _getch();
		if (ch == 1)
			push_end();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
	else
	{
		int n = list[rear];
		rear--;

		if (front == 5)
		{
			front = -1;
			rear = -1;
		}

		cout << "\n" << n << " is successfully deleted from the list!\n";

		cout << "\nNew list:";
		cout << endl;
		for (int i = front; i <= rear; i++)
		{
			cout << list[i] << " ";
		}

		cout << "\n\nPress ENTER to delete more or ESCAPE to go back to Main Menu.";
		char ch = _getch();
		if (ch == 13)
			pop_end();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();

	}
}
void display()
{
	system("CLS");
	if (rear == -1)
	{
		cout << "\n\aList is empty!";

		cout << "\n\nPress 1 to insert an item or ESCAPE to go back to Main Menu.";

		char ch = _getch();
		if (ch == 1)
			push_end();
		else if (ch == 27)
			input_restricted_dequeue();
		else
			cout << "\n\aWrong entry!!!";
		input_restricted_dequeue();
	}
	else
	{
		cout << "List:\n";
		for (int i = front; i <= rear; i++)
		{
			cout << list[i] << " ";
		}
		cout << "\n\nPress any key to go back to Main Menu.";
		if (_getch())
			input_restricted_dequeue();
	}
}