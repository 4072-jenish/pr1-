
/*
Q3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
*/

#include<iostream>

using namespace std;

class Time{
	public:
	  float second;
};

int main(){
	
	Time T1;
	
	cout << "Enter seconds :-";
	cin >>  T1.second ;
	
	
	cout << "seconds in minuts ==>" << T1.second/60 << "\n";
	cout << "seconds in houers ==>" << T1.second/3600;
}

/*
Enter seconds :-3600
seconds in minuts ==>60
seconds in houers ==>1
*/

