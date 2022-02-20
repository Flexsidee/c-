/* 
A batch of concrete is made using the following materials
	-cement = 30,000kg
	-sand = 50,000 kg
	-gravel = 7.500kg
	-water = 3,000kg
a)write a c++ program to calculate and display the amount of sand in a real number and a percentage of the total mass of concrete
b) the amount of water in real number and a percentage of the amount
*/

#include <iostream>
using namespace std;

int main(){
	int cement = 30000;
	int sand = 50000;
	int gravel = 7500;
	int water = 3000;
	
	double totalMass = cement + sand + gravel + water;	
	double sandPercentage = (sand / totalMass ) * 100;
	double cementPercentage = (cement / totalMass) * 100;
	
	cout << "The amount of sand in real number is " << sand << "kg" << endl; 
	
	cout << "The percentage of the total mass of sand = " << sandPercentage << "%" << endl; 
	
	cout << "The amount of water in real number is " << water << "kg" << endl; 
	
	cout << "The percentage of the total mass of cement = " << cementPercentage << "%"; 
	
	
	
	return 0;
}
