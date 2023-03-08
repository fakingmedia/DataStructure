#include "SqList.h"
#include <iostream>

template<class T>
SqList<T>::SqList()
{
	data = new T[InitSize];
	length = 0;
	MaxSize = InitSize;
	std::cout << "SqList has been constructed." << std::endl;
}

template<class T>
SqList<T>::SqList(int max)
{
	data = new T[max];
	length = 0;
	MaxSize = max;
	std::cout << "SqList has been constructed." << std::endl;
}

template<class T>
SqList<T>::~SqList()
{
	delete[] data;
	std::cout << "SqList has been destroyed." << std::endl;
}

template<class T>
void SqList<T>::IncreaseSize(int len)
{
	T* prt = data;
	data = new T[MaxSize + len];
	for(int i = 0; i < MaxSize; i++)
	{
		data[i] = prt[i];
	}
	MaxSize += len;
	delete[] prt;
	std::cout << "The length of Sqlist increases of " << len 
	<< ", and increases to " << MaxSize  << "." << std::endl;
}

template<class T>
void SqList<T>::PrintList()
{
	for(int i = 0; i < length; i++)
	{
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

template<class T>
bool SqList<T>::ListInsert(int i, T element)
{
	if(i < 1 || i > length + 1)
	{
		std::cout << "error: Your input is out of range.";
		return false;
	}	
	if(length == MaxSize)
	{
		std::cout << "error: The list is full.";
		return false;
	}
	for(int j = length; j >= i; j--)
	{
		data[j] = data[j - 1];
	}
	data[i - 1] = element;
	length++;
	return true; 
}

template<class T>
bool SqList<T>::ListDelete(int i, T& element)
{
	if(i < 1 || i > length)
	{
		std::cout << "error: Your input is out of range.";
		return false;
	}
	element = data[i - 1];
	for(int j = i; j < length; j++)
	{
		data[j - 1] = data[j];
	}
	length--;
	return true;
}

template<class T>
T SqList<T>::GetElem(int i)
{
	return data[i - 1];
}

template<class T>
int SqList<T>::LocateElem(T element)
{
	for(int i = 0; i < length; i++)
	{
		if(data[i] == element)
		{
			return i + 1;
		}
	}
	return 0;	//没有找到返回0
}