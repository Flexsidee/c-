#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int age;
	string name;
	ofstream outWright;
	ifstream inRead;
	
	outWright.open("test2.txt");
	
	cout << "What is your name? " << endl;
	cin >> name;
	outWright << name << endl;
	
	cout << "How old are you? " << endl;
	cin >> age;
	outWright << age << endl;
	
	outWright.close();
	
	inRead.open("test2.txt");
	
	inRead >> name;
	cout << "Name: " << name << endl;
	
	inRead >> age;
	cout << "Age: " << age << endl;
	
	inRead.close();
	
	return 0;
}
