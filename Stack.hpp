#include <iostream>
#include "Stack.h"

template<class T>
Stack<T>::Stack()
{
	data = new T[InitSize];
	top = -1;
	MaxSize = InitSize;
}

template<class T>
Stack<T>::Stack(int max)
{
	data = new T[max];
	top = -1;
	MaxSize = max;
}

template<class T>
Stack<T>::~Stack()
{
	delete[] data;
}

template<class T>
bool Stack<T>::StackEmpty()
{
	return top == -1;
}

template<class T>
bool Stack<T>::Push(T element)
{
	if(top == MaxSize - 1)
		return false;
	data[++top] = element;
	return true;
}

template<class T>
bool Stack<T>::Pop(T& element)
{
	if(top == -1)
		return false;
	element = data[top--];
	return true;
}

template<class T>
bool Stack<T>::GetTop(T& element)
{
	if(top == -1)
		return false;
	element = data[top];
	return true;
}