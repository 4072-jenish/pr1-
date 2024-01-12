#include<iostream>
#include<string.h>

using namespace std;

class Room{
	public:
	  char adress[100];
	  int sf;
	  char color[100];
	  int fan;
};

int main(){
	
	Room r1;
	
	cout << "Enter adress :-";
	cin >>  r1.adress ;
	cout << "Enter color :-\n";
	cin >>  r1.color ;
	cout << "Enter fan count :-";
	cin >>  r1.fan ;
	cout << "Enter squar feet:-";
	cin >>  r1.sf ;
	
	cout << "adress is " << r1.adress << "\n";
	cout << "color is " << r1.color << "\n";
	cout << "fan count is " << r1.fan << "\n";
	cout << "squar feet is " << r1.sf;
	
}
