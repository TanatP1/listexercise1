#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for(Node *p; !isEmpty(); ) {
		p=head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if(tail==0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{	
	// 1ST CASE NOTHING IN THE LIST
	if (head == 0) 
	{
		Node *tmp = new Node(el, NULL); // NODE POINTED TO NULL
		tail = head = tmp;				// SET TAIL AND HEAD EQUAL TO TMP
	}

	// 2ND CASE MULTIPLE ELEMENTS IN THE LIST
	else
	{
		Node *tmp = new Node(el, NULL); // NODE POINTED TO NULL
		tail->next = tmp; 
		tail = tail->next; 
	}
}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if(head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	// TO DO!
	Node *tmp = head;

	if (head == 0) // 1ST CASE NOTHING IN THE LIST
	{
		std::cout << "The list is empty" << std::endl;
	}
	else if (head != tail) // MULTIPLE ELEMENTS IN THE LIST
	{
		while (tmp->next != tail) // SEACH FOR A NODE BEFORE TAIL NODE
		{
			tmp = tmp->next; // MAKE TMP POINTER POINTS TO THE NEXT ELEMENT
		}
		tail = tmp; // MOVE TAIL TO TMP POINTER
		delete tail->next;
		tail->next = NULL; // SET THE TAIL NODE TO POINT TOWARD NULL
	}
	else if (head == tail) // 3RD CASE A SINGLE ELEMENT IS IN THE LIST
	{
		delete tmp;
		head = tail = NULL;
		std::cout << "There is zero element in the list" << std::endl;
	}
	
	return 0;
}
bool List::search(char el)
{	
	// TO DO! (Function to return True or False depending if a character is in the list.
	Node *tmp = head;
	while (tmp != NULL) // LOOP THE ENTIRE LIST
	{
		if (tmp->data == el) // IF THE INPUT = ELEMENT
		{
			return true;
		}
		else
		{
			tmp = tmp->next; // MOVE TMP POINTER TO THE NEXT ELEMENT
		}
	}
	return false;
	
}
void List::reverse()
{

	// TO DO! (Function is to reverse the order of elements in the list.
}
void List::print()
{
	if(head  == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while(tmp!=tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}