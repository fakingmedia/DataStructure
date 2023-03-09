#include "ChainTable.hpp"
#include "Stack.hpp"
#include <iostream>

using namespace std;

void TestChainTable()
{
	LinkList<int>* table = new LinkList<int>();

	int a = table->Insert(1, 100);
	cout << a << endl;
	cout << table->Insert(1, 98) << endl;
	cout << table->Insert(2, 99) << endl;
	cout << table->GetElem(1)->data << endl;
	cout << table->GetElem(2)->data << endl;
	cout << table->GetElem(3)->data << endl;
	int elem;
	cout << table->Delete(2, elem) << endl;
	cout << table->len() << endl;
	cout << elem << endl;

	delete table;
}

void TestStack()
{
	Stack<int> IntStack(20);
	int a = 3;
	cout << IntStack.StackEmpty() << endl;
	cout << IntStack.Pop(a) << endl;
	cout << IntStack.Push(a) << endl;
}

int main()
{	
	TestStack();

	system("pause");
	return 0;
}
