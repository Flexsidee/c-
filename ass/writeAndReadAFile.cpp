//program to open a file in reading and writing mode then writing information entered by a user in to file afile.dat then output it to screen
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream file("example.txt");
	string text, line;
	
	//writing to the file
	if(file.is_open()){
		cout << "Write something into the file" << endl;
		getline(cin, text);
		file << text;	
		file.close(); //closing the file
	}else cout << "Unable to open file";

	cout << "\nBelow is what was written into this file: \n";
	
	//reading the data in the file then printing it to screen
	file.open("example.txt"); 
	if(file.is_open()){
		while(!file.eof()){
			getline(file, line); //reading the data from the file
			cout << line << endl; //displaying the data to the screen
		}
		file.close();
	}else cout << "Unable to open file";
	
	return 0;
}
