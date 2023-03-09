#pragma once
#define InitSize 10

template<class T>
class Stack
{
private:
	T* data;
	int top;
	int MaxSize;
public:
	Stack();
	Stack(int max);
	~Stack();
	
	bool StackEmpty();
	bool Push(T element);
	bool Pop(T& element);
	bool GetTop(T& element);
};