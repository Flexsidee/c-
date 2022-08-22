//Read in three numbers and writes them all in sorted order
#include <iostream>
using namespace std;
int main(){
	int a, b, c; //declare variables to hold the values
	cout << "Input the numbers" << endl;
	cin >> a >> b >> c; //accept all the numbers

	if (a > c){
		swap(a, c); 
	}
	if (a > b){
		swap(a, b); 
	}
	if (b > c){
		swap(b, c); //Now the smallest element is the 1st one. Just check the 2nd and 3rd
	}
		
	cout << "The sorted array = [ " <<  a << ", " << b << ", " << c << "]"; //printing the sorted list
	
	return 0;
}
