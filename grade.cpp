#include <iostream>;
using namespace std;

int main(){
	int courseLength, i;
	float sum, average;	
	
	sum = 0; //set the sum of the students course to 0 at the beginning of the program
	
	cout << "Enter the number of courses " ;
	cin >> courseLength; //get the number of courses the student is offering
	
	//setting the array to hold all the courses  to an empty array
	int scores[courseLength] = {};
	
	//getting the scores of all the courses
	for(i = 1; i<= courseLength; i++){
		cout << "Enter course " << i << " score\n";
		cin >> scores[i];
	}
	
	//this loop is used to add up the sum of the scores the user input
	for(i = 1; i <= courseLength; i++){
		sum += scores[i];	
	}
	
	average = sum / courseLength; //this is the average score of the student
	
	//this loop is used to display all the scores gotten from the user
	cout << "\nThe scores of the student are :\t" ;
	for(i = 1; i <= courseLength; i++){
		cout << scores[i] << ", ";
	}
	
	cout << "\nThe sum of the courses is\t" << sum << endl;
	
	cout << "\nThe average score of the student is \t" << average << endl;
	
	//this is block of code is used to check for the grade
	if ( average > 70 ){
		cout << "\nYour grade is A";
	}else if ( average <= 69 && average >= 60){
		cout << "\nYour grade is B";
	}else if ( average <= 59 && average >= 50){
		cout << "\nYour grade is C";
	}else if ( average <= 49 && average >= 40){
		cout << "\nYour grade is D";
	}else{
		cout << "\nYou failed";
	}
	
	
	return 0;
}
