/*
Name: Somade Daniel Oluwaseunfunmi
Matric No: 21/8874
Department: 200level Computer Science
Question: C++ to calculate GPA for each semester and CGPA of a student
*/
#include <iostream>
using namespace std;

//this function is used to calculate points for each course
int calculatePoint(int unit, int score){
	int point;
	if(score>69){
		point = unit * 5;
	}else if(score>59 && score<70){
		point = unit * 4;
	}else if(score>49 && score<60 ){
		point = unit * 3;
	}else if(score>44 && score<50){
		point = unit * 2;
	}else if(score>39 && score <45){
		point = unit;
	}else{
		point = 0;
	}
	return point;
}

//this function is used to calculate GPA for each semester
float calculateGpa(){
	int i, totalUnits=0, totalPoints=0, noOfCourses;
	float gpa;
	
	cout << "Enter the number of courses offered in the semester: ";
	cin >> noOfCourses;
	
	//this loop is used to get all courses unit and scores
	for(i=1; i<=noOfCourses; i++){
		int unit, score;
		cout << "Enter course " << i << " unit: ";
		cin >> unit;
		totalUnits += unit;
		cout << "Enter course " << i << " score: ";		
		cin >> score;		
		totalPoints += calculatePoint(unit, score);
		cout << endl;
	}
	
	//this linke calculates the gpa for the semester, each variable is casted into floats from int
	gpa = float(totalPoints) / float(totalUnits);
	return gpa;
}

int main() {
   int noOfSemesters, j;
   float gpaSum = 0, cgpa;
   cout << "How many semesters result are you calculating: ";
   cin >> noOfSemesters;
   cout << endl << endl;
   
	for(j=1; j <= noOfSemesters; j++){ 	
		cout << "Enter details for Semester " << j << endl;
		cout << "--------------------------- \n";
		float gpa = calculateGpa();
	   	gpaSum += gpa;
	   	//system("cls"); //to clear the screen
	}
	
   cgpa = gpaSum / noOfSemesters;
   cout << "Your CGPA = " << cgpa;
   
   return 0;
}
