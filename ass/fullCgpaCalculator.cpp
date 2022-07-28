#include <iostream>
using namespace std;

//the function below is used to calculate points for each grade
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


int main(){
	int i, noOfCourses, totalUnits=0, totalPoints =0;
	float gpa;
	
	cout << "Enter the number of courses offered in the semester: ";
	cin >> noOfCourses;
	
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
	
	gpa = float(totalPoints) / float(totalUnits);
	
	cout << "Total Points = " << totalPoints;
	cout << "\nTotal Units = " << totalUnits;
	cout << "\nCummulative GPA for the semester = " << gpa;
	
	
	
	return 0;
}
