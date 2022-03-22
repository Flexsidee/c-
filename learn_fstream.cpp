#include <iostream>
#include <fstream>

using namespace std;

int main(){
//	declaring the variables
	ifstream inRead;
	ofstream outWright;
	string name;
	int age;
	
//	open the stream variable
	outWright.open("new-test.txt");
	
	cout << "What is your full name ? \n";
	getline(cin, name);
	outWright << name << endl;
	
	cout << "How old are you? \n";
	cin >> age;
	outWright << age;
	
	outWright.close();
	
	inRead.open("new-test.txt");
	
	cout << "Reading from the file" << endl;
	inRead >> name;
	cout << "Name : " << name << endl;
	
	inRead >> age;
	cout << "Age: " << age;
	
	inRead.close();
	
	


return 0;
}
