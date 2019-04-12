#include <iostream>
#include <iomanip>
#include "Stack.h"
#include <ctime>

using namespace std; 

Stack::Stack()//не используется
{
	start = nullptr;
	size = 0;
}

Stack::~Stack()//деструктор

{

	Element *ptr = start;



	while ((ptr = start) != nullptr)

	{

		start = start->next_elem;

		delete ptr;

	}

	start = nullptr;
}
Stack::Stack(const Stack &s)//конструктор копирования 
{
	Stack s1;
	Element *ptr = s1.get_start(),*ptr1=s1.get_start(),*ptr2= s.start;
	
		for (int i = 0; i < s.size; ++i)
		{
			if (ptr)//если стек не пустой
			{
				ptr1 = new Element;
				ptr->next_elem = ptr1;
				ptr1->data = ptr2->data;
				ptr1->next_elem = nullptr;
				ptr = ptr1;

			}
			else
			{
				start = new Element;
				start->data = ptr2->data;
				start->next_elem = nullptr;
				ptr = start;
			}
			ptr2 = ptr2->next_elem;

		}
	
}



Stack::Stack(int size,int f)
{
	start = nullptr;
	Element *ptr = this->start, *ptr1 = this->start;
	this->size = size;
	if (f) {
		for (int i = 0; i < size; ++i)
		{
			if (ptr)//если стек не пустой
			{
				ptr1 = new Element;
				ptr->next_elem = ptr1;
				ptr1->data = rand() % 20 + 1;
				ptr1->next_elem = nullptr;
				ptr = ptr1;

			}
			else
			{
				start = new Element;
				start->data = rand() % 20 + 1;
				start->next_elem = nullptr;
				ptr = start;
			}

		}
	}
	else
	{
		for (int i = 0; i < size; ++i)
		{
			if (ptr)//если стек не пустой
			{
				ptr1 = new Element;
				ptr->next_elem = ptr1;
				ptr1->data = 0;
				ptr1->next_elem = nullptr;
				ptr = ptr1;

			}
			else
			{
				start = new Element;
				start->data = 0;
				start->next_elem = nullptr;
				ptr = start;
			
			}

		}
	}

}



ostream &operator << (ostream &stream,const Stack& op2)
{
	Element *ptr = op2.start;
	if (!ptr)
		stream << "Стек пуст.";
	else
	{
		stream<<"Начало стека —-> Конец стека" <<endl <<endl;
		while (ptr)
		{
			stream << setw(10) << ptr->data;
			ptr = ptr->next_elem;
		}
	}
	return stream;
}
istream &operator >> (istream &stream, Stack& op2)
{
	cout << "Введите элементы стека(" << op2.get_size() << " элементов):" << endl;
	Element *ptr = op2.get_start();
	for (int i = 0; i < op2.get_size(); ++i)
	{
		stream >> ptr->data;
		ptr = ptr->next_elem;
	}
	return stream;
}
Element* Stack::get_start()
{
	return start;
}


int Stack::get_size()
{
	return size;
}


Stack& Stack::operator !()
{
	Element *ptr = this->get_start();
	while (ptr)
	{
		ptr->data = ptr->data * (-1);
		ptr = ptr->next_elem;
		
	}
	return *this;
}

Stack operator -(  Stack& op2,int op1 )
{
	
	
	Element* ptr = op2.get_start() ;
	while (ptr)
	{
		ptr->data = ((ptr->data) - op1);
		
		ptr = ptr->next_elem;
			
	}

	return op2;
}

Stack operator /(Stack& op2, int op1)
{


	Element* ptr = op2.get_start();
	while (ptr)
	{
		ptr->data = ptr->data / op1;
		ptr = ptr->next_elem;

	}
	return op2;
}

Stack  Stack::operator = ( Stack op2)//Stack Stack::operator =(const  Stack& op2)
{
	Element *ptr = start, *ptr1 = op2.get_start();
	while (ptr)
	{
		ptr->data = ptr1->data ;
		ptr = ptr->next_elem;
		ptr1 = ptr1->next_elem;
	}
	return *this;
}



Stack& Stack::operator -=(const Stack& op2)
{
	Element *ptr =start, *ptr1 = op2.start;
	while (ptr)
	{
		ptr->data = ptr->data - ptr1->data;
		ptr = ptr->next_elem;
		ptr1 = ptr1->next_elem;
	}
	return *this;
}



Stack& Stack::operator /=(const Stack& op2)
{
	Element *ptr = this->get_start(), *ptr1 = op2.start;
	while (ptr)
	{
		ptr->data = round(ptr->data / ptr1->data * 1000) / 1000;
		ptr = ptr->next_elem;
		ptr1 = ptr1->next_elem;
	}
	return *this;
}

bool operator  ==(const Stack& op1, const Stack& op2)
{
	Element *ptr = op1.start, *ptr1 = op2.start, *ptr2 = op2.start;
	for (int i = 0; i < op1.size; ++i)
	{
		for (int j = 0; j < op2.size; ++j) {
			if (ptr->data == ptr1->data)
			{
				cout << "Есть одинаковые элементы: "<< ptr1->data;//если написать ptr->data,то выдает фигню
				return true;
			}
			
			ptr1 = ptr1->next_elem;
		}
		ptr1 = ptr2;
		ptr = ptr->next_elem;
	}
	cout << "Одинаковых элементов нет";
	return false;
}

bool operator  >(const Stack& op1, const Stack& op2)
{
	int count = 0;
	Element *ptr = op1.start, *ptr1 = op2.start;
	while(ptr)
	{
			if (ptr->data > ptr1->data)
			{
				cout << "Есть элемент стека,больший элемента стека 2\n Номер элемента в стеке: " << count+1;//если написать ptr->data,то выдает фигню
				return true;
			}

		ptr = ptr->next_elem;
		
		ptr1 = ptr1->next_elem;
		count++; 
	}
	cout << "Такого элемента нет";
	return false;
}

bool operator  <(const Stack& op1, const Stack& op2)
{
	int count = 0;
	Element *ptr = op1.start, *ptr1 = op2.start;
	while (ptr)
	{
		if (ptr->data < ptr1->data)
		{
			cout << "Есть элемент стека,больший элемента стека 2\n Номер элемента в стеке: " << count + 1;//если написать ptr->data,то выдает фигню
			return true;
		}

		ptr = ptr->next_elem;

		ptr1 = ptr1->next_elem;
		count++;
	}
	cout << "Такого элемента нет";
	return false;
}