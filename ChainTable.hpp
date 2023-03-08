#include "ChainTable.h"
#include <iostream>

template<class T>
Node<T>::Node()
{
	this->next = NULL;
	this->prior = NULL;
}

template<class T>
Node<T>::Node(T data)
{
	this->data = data;
	this->next = NULL;
	this->prior = NULL;
}

template<class T>
Node<T>::~Node()
{
	std::cout << "A node has been freed" << std::endl;
}

template<class T>
LinkList<T>::LinkList()
{	
	Node<T>* p= new Node<T>();
	head = p;
	length = 0;
}

template<class T>
void LinkList<T>::DeleteAll(Node<T>* p)
{
	if(p->next != NULL)
	{
		DeleteAll(p->next);
	}
	delete p;
}

template<class T>
LinkList<T>::~LinkList()
{
	DeleteAll(head);
}

template<class T>
Node<T>* LinkList<T>::GetElem(int i)
{
	if(i < 0)
	{
		return NULL;
	}
	Node<T>* p = head;
	for (int j = 0; j < i && p != NULL; j++)
	{
		p = p->next;
	}
	return p;
}

template<class T>
Node<T>* LinkList<T>::LocateElem(T element)
{
	Node<T>* p = head->next;
	while(p != NULL)
	{
		if(p->data == element)
		{
			return p;
		}
		else
		{
			p = p->next;
		}
	}
	return NULL;
}

template<class T>
bool LinkList<T>::Insert(int i, T element)
{	
	if(i < 1 || i > length + 1)
	{
		return false;
	}
	Node<T>* p = head;
	for (int j = 0; j < i-1; j++)
	{
		p = p->next;
	}
	Node<T>* s= new Node<T>(element);

	s->next = p->next;
	if(p->next != NULL)
		p->next->prior = s;
	s->prior = p;
	p->next = s;

	length++;
	return true;
}

template<class T>
bool LinkList<T>::Delete(int i, T& element)
{
	if(i < 1 || i > length)
	{
		return false;
	}
	Node<T>* q = head;
	for (int j = 0; j < i; j++)
	{
		q = q->next;
	}
	Node<T>* p = q->prior;
	element = q->data;
	p->next = q->next;
	if(q->next != NULL)
		q->next->prior = p;
	delete q;

	length--;
	return true;
}

template<class T>
int LinkList<T>::len()
{
	return length;
}