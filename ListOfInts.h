#pragma once
#include "NodeofInt.h"

using namespace std;

class ListOfInts {
	friend class NodeofInt;

private:
	nodePtr head;

public:
	ListOfInts();
	void insertBack(int a);
	void displayList();
	int deleteMostRecent();
	~ListOfInts();
};

