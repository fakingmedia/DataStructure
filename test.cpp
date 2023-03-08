#include "ChainTable.hpp"
#include <iostream>

using namespace std;

int main()
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

	system("pause");
	return 0;
}
