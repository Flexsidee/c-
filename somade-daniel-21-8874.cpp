#include<iostream>
using namespace std;

int main()
{
	//declaring all variables used in the program 
	int a, b, c, d, e, f, g, sum, average ;
	
	//assigning user inputs to the variables 
	cin >> a >> b >> c >> d >> e >> f >> g;
	
	//finding the sum of all the inputs
	sum = a + b + c + d + e + f + g;
	
	//finding the average of all the numbers
	average= sum / 5 ;
	
	cout << "The sum is " << sum << endl ;
	cout << "The average is " << average;
	
	return 0;
}
