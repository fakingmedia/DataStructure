#pragma once

template<class T>
class Node
{
public:
	T data;
	Node* next;
	Node* prior;

	Node();
	Node(T data);
	~Node();
};

template<class T>
class LinkList
{
private:
	int length;
	Node<T>* head;
public:
	LinkList();
	void DeleteAll(Node<T>* p);	//释放所有节点的递归函数
	~LinkList();
	
	Node<T>* GetElem(int i);
	Node<T>* LocateElem(T element);
	bool Insert(int i, T element);
	bool Delete(int i, T& element);
	int len();
};