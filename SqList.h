#pragma once
#define InitSize 10

template<class T>
class SqList
{
private:
	T* data;
	int MaxSize;
	int length;
public:
	SqList();
	SqList(int max);
	~SqList();

	void IncreaseSize(int len);
	void PrintList();

	bool ListInsert(int i, T element);
	bool ListDelete(int i, T& element);
	T GetElem(int i);
	int LocateElem(T e);
};

