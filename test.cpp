#include "SqList.hpp"
#include <iostream>

int main(){
	SqList<int> MyList(2);

	MyList.ListInsert(1, 34);
	MyList.ListInsert(2, 12);
	MyList.IncreaseSize(2);
	MyList.ListInsert(2,56);
	MyList.PrintList();
	int e;
	MyList.ListDelete(1, e);
	MyList.PrintList();

	system("pause");

	return 0;
}