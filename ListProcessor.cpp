// ListProcessor.cpp

// Ana Giljum
// Sept. 18, 2017
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cow list size : " << cows.size() << endl << endl;

	//Tests insertAsLast when object has other nodes
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(3.5);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl << endl;

	//Test insertAsLast when object has no other nodes
	List pigs;
	pigs.insertAsLast(3.5);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size: " << pigs.size() << endl;
	cout << "pigs list sum : " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size: " << pigs.size() << endl;
	cout << "pigs list sum : " << pigs.sum() << endl << endl;
	
	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size: " << pigs.size() << endl;
	cout << "pigs list sum : " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
