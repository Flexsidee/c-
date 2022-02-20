/* 
Write a C++ program to calculate the lentht of the skirting board whot diagram was given in the class room
*/

#include <iostream>
using namespace std;

int main(){
	float a = 2.7;
	float b = 4.1;
	float c = 3.2;
	
	double lenght = 4 * (a + b + c) ;
	
	cout << "The length of the skitting board is " << lenght << "m";
	
	return 0;
}
