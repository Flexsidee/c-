#include<iostream>
using namespace std;

int main()
{
	//declaring all variables used in the program 
	int u, v, x, y, z, add , average ;
	
	//assigning user inputs to the variables 
	cin >> u >> v >> x >> y >> z;
	
	//finding the sum of all the inputs
	add= u + v + x + y + z; 
	
	//finding the average of all the numbers
	average= add / 5 ;
	
	cout << "The sum is " << add << endl ;
	cout << "The average is " << average;
	
	return 0;s
}
