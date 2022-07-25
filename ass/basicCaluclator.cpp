//a c++ program for basic calculator which does not stop unless the user selects the exit option
#include <iostream>
using namespace std;

int main(){
	int option;
	float a, b, result;
	bool finished = false;

	cout << "List of operations offered by the calculator \n";
	cout << "1. Addition \n";
	cout << "2. Subtraction \n";
	cout << "3. Multiplication \n";
	cout << "4. Division \n";
	cout << "5. Exit \n";
	
	//loops this process untill the use selects option5 which sets finished=true
	while(!finished){
		cout << "\nEnter the number of the operation you want: ";
		cin >> option;
		
		if(option == 5){
			finished = true;
		}else if(option > 5){
			cout << "Please select an option on the list";
		}else{
			cout << "Enter the first number: ";
			cin >> a;
			cout << "Enter the second number: ";
			cin >> b;
			
			if(option == 1){
				result = a + b;
				cout << a << " + " << b << " = " << result;
			}else if(option == 2){
				result = a - b;
				cout << a << " - " << b << " = " << result;
			}else if(option == 3){
				result = a * b;
				cout << a << " X " << b << " = " << result;
			}else if(option == 4){
				result = a / b;
				cout << a << " / " << b << " = " << result;
			}
			
			cout << "\n---------------------------- \n";
		}
	}
	
	return 0;
}
