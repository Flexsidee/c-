#include <iostream>
using namespace std;

int main(){
	int a = 4;
	int b = 2;
	
	int addition = a + b; 
	cout << "The sum of the two numbers is " << addition << endl;
	
	int subtraction = a - b;
	cout << "The difference between the two numbers is " << subtraction << endl;
	
	int division = a / b;
	cout << "The first number divided by the second number is " << division << endl;
	
	int multiplication = a * b; 
	cout << "The product of the two numbers is " << multiplication << endl;
	
	int modulus = a % b; 
	cout << "The first number modulus the second number is " << modulus;
	
	return 0;
}

