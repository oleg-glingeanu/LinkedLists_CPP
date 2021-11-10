#pragma once
#include "ListOfInts.h"

using namespace std;

class NodeofInt {
	friend class ListOfInts;
private:
	int theValue;
	NodeofInt *next;

public:
	NodeofInt();
};
typedef struct NodeofInt* nodePtr;