#include <iostream>
#include "list.h"
#include "list.cpp"
using namespace std;

int main()
{
	//Sample Code

	// FOR HEADPUSH
	List mylist1;
	mylist1.pushToHead('k');
	mylist1.pushToHead('e');
	mylist1.pushToHead('n');
	mylist1.print(); // OUTPUT LIST1 : nek

	cout << endl;

    // FOR TAIL PUSH
	List mylist2;
	mylist2.pushToTail('k');
	mylist2.pushToTail('e');
	mylist2.pushToTail('n');
	mylist2.print(); // OUTPUT LIST2 : ken

	cout << endl;

	// POPTAIL : POP K FROM LIST1
	mylist1.popTail();
	mylist1.print(); // THE OUTPUT GONNA BE LIKE ne

	cout << endl;


	//SEARCHING THE PARTICULAR ELEMENT IN LIST2
	char element; // DECLARE THE VARIABLE FOR BEING TESTER
	cout << "Check ELEMENTS in the list 2 : "; // PROMPT USER TO INPUT THE ELEMENT THAT WANT TO SEARCH
	cin >> element;

	if (mylist2.search(element)) // USIND SEARCHING FUNCTION FOR LIST2
    {
    	cout << element << " is in list 2" << endl; // IF FOUND
    }
    else
    {
        cout << element << " is not in list 2" << endl; // IF NOT FOUND
    }

	
	mylist2.reverse(); // REVERSION FUNCTION
	mylist2.print(); // PRINT FUNCTION

	//TO DO! Write a program that tests your list library - the code should take characters, push them onto a list, 
	//- then reverse the list to see if it is a palindrome!
	
	return 0;
}