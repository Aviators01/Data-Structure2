/*
Timothy Queva
CS2010 Lab9
December 8,2020
*/

/*
This program utilizes principles of queue and stacks using pre-defined data containers,
virtual functions, and inheritance to complete CS2010 lab requirements.
*/

#include <iostream>
#include "queue.cpp"
#include "stack.cpp"

using namespace std;

int main(){
	const int TEST=10;
	queue<int> nums;
	stack<int> nums2;
	
	//Generates numbers just to test queue and stack
	for(int i=1;i<=TEST;i++) nums.add(i);
	for(int i=1;i<=TEST;i++) nums2.add(i);
	
	int count=1;
	cout << "Queue is: ";
	while(!nums.empty()){
		cout << nums.curr() << " ";
		nums.remove();
	}
	cout << endl;
	
	//cerr << "test";		//For debugging. Avoids buffered stream in order to test if program executes up to this point
	
	cout << "Stack is: ";
	while(!nums2.empty()){
		cout << nums2.curr() << " ";
		nums2.remove();
	}
	cout << endl;
	
	return 0;
}