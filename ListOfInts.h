#pragma once
#include "NodeofInt.h"

using namespace std;

class ListOfInts {
	friend class NodeofInt;
private:
	NodeofInt* head;
public:
	ListOfInts();
	void insertBack(int);
	void displayList();
	int deleteMostRecent();
	~ListOfInts();
}; 