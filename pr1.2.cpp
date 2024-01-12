
/*
Q2. WAP to create a class to read and add two times.
*/

#include<iostream>

using namespace std;

class Time{
	public:
	  int ft;
	  int st;
};

int main(){
	
	Time T1;
	
	cout << "Enter first time :-";
	cin >>  T1.ft ;
	cout << "Enter second time :-";
	cin >>  T1.st ;
	
	cout << "first time ==>" << T1.ft << "\n";
	cout << "second time ==>" << T1.st << "\n";
}

/*
Enter first time :-10
Enter second time :-20
first time ==>10
second time ==>20
*/

