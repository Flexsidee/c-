/*
Name: Somade Daniel Oluwaseunfunmi
Matric No: 21/8874
Department: 200 Level Computer Science
Week: 4-5
Question (c): Write a C++ program to  find both the largest and smallest in a list of integers
*/

#include <iostream>
using namespace std;
int main(){
	int n1, n2, n3, smallest, largest;
	cout<< "Enter the three numbers: \n";
	cin >> n1 >> n2 >> n3;
	smallest = n1;
	largest = n2;
	if(n2 < smallest){
		smallest = n2;
	}
	if(n3 < smallest){
		smallest = n3;
	}
	if(n3 > largest){
		largest = n3;
	}
	if(n2 > largest){
		largest = n2;
	}
	
	cout<<"\nThe smallest number among ("<< n1 << ","<< n2 << ", "<< n3 << " )is :" <<smallest;
	cout<<"\nThe largest number among ("<< n1 << ","<< n2 << ", "<< n3 << " )is  :" <<largest;

	return 0;
}