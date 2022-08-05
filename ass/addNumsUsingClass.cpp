//program to add 2 numbers using class
#include <iostream>
using namespace std;

//class definition
class Numbers{
	private:
		int a;
		int b;
	public:
		//members function declaration
		void readNumbers(void);
		void printNumbers(void);
		int calAddition(void);
		
};

void Numbers::readNumbers(void){
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
}

void Numbers::printNumbers(void){
	cout << "\na = " << a << ", b = " << b <<endl;
}

int Numbers::calAddition(void){
	return a + b;
}

int main(){
	Numbers num; //declaring object
	num.readNumbers(); //take input
	int add = num.calAddition(); //return the addition into
	
	num.printNumbers(); //print number
	cout << "Addition of the numbers = " << add << endl; //print the result
	
	return 0;
}
