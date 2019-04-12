#pragma once
#include "Element.h"
using namespace std;

class Stack
{
	int size;//размер стека
	Element *start;//указатель на первый элемент стека
public:
	Stack();//конструктор
	explicit Stack(int size,int f=0);//конструктор 
	Stack(const Stack &s);//конструктор копирования
	~Stack();//деструктор

	Element* get_start();
	int get_size();
	//int get_data();

	Stack& operator -=(const Stack& op2);
	Stack& operator /=(const Stack& op2);
	friend Stack operator -( Stack& op2, int op1);
	friend Stack operator /(  Stack& op2, int op1);
	//friend Stack operator -(const Stack& op1, const Stack& op2);
	//friend Stack operator /(const Stack& op1, const Stack& op2);
	Stack  operator = (Stack op2);
	Stack& operator !();
	friend ostream &operator << (ostream &stream, const Stack& op2);
	friend istream &operator >> (istream &stream,  Stack& op2);
	friend  bool operator  ==(const Stack& op1, const Stack& op2);
	friend  bool operator >(const Stack& op1, const Stack& op2);
	friend bool operator  <(const Stack& op1, const Stack& op2);
};