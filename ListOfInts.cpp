#include "ListOfInts.h"
#include <iostream>

using namespace std;

ListOfInts::ListOfInts()
	:head(NULL){
	
	// Constructor
	cout << "ListOfInts Constructor\n";

}

ListOfInts::~ListOfInts() {

	// Deconstructor
	cout << "ListOfInts Deconstructor\n";

}

void ListOfInts::insertBack(int a) {

	// Insert back Function
	nodePtr newNode = new NodeofInt;
	newNode->next = NULL;
	newNode->theValue = a;

	nodePtr tempPtr;

	if (head != NULL) {
		head = newNode;
	}
	else
	{
		for (tempPtr = head; tempPtr->next; tempPtr = tempPtr->next);
		tempPtr->next = newNode;
	}

}

void ListOfInts::displayList() 
{
	// Display list function
	nodePtr tempptr = head;

	while (tempptr != NULL) 
	{
		cout << tempptr->theValue << endl;
		tempptr = tempptr->next;
	}
}

int ListOfInts::deleteMostRecent() {

	// Delete Most Recent Function
	nodePtr delPtr = NULL;
	nodePtr current = NULL;
	nodePtr temp = NULL;

	temp = head;
	current = head;

	while (current != NULL) {
		temp = current;
		current = current->next;

	}
	if (current == NULL) {
		cout << "There is no list\n";
		delete delPtr;
	}
	else {
		delPtr = current;
		current = current->next;
		temp->next = current;
		delete delPtr;
		cout << " The value " << current << "Has been deleted \n";

	}
}

