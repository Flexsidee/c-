//program to calculate cgpa
#include <iostream>
using namespace std;

int main() {
   int n, i;
   float gpaSum = 0, cgpa;
   cout << "How many semesters result are you calculating: ";
   cin >> n;
   
   for(i=1; i <= n; i++){ 	
   	float gpa;
   	cout << "Enter GPA " << i << ": ";
   	cin >> gpa;
   	gpaSum += gpa;
   }

   cgpa = gpaSum / n;
   cout << "Your CGPA = " << cgpa;
   
   return 0;
}
