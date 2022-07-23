#include <iostream>
using namespace std;

void checkLeapYear(int year){
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) 
	  cout << year << " is a leap year" << endl;
	else 
	  cout << year << " is not a leap year" << endl;
}

int main(){
  /*
  // checking for leap year 
  int year;
  cout << "Input the year " ;
  cin >> year;  
  checkLeapYear(year);
  */

  struct myStructure
  {
    int age;
    string name;
  };

  myStructure person1;
  person1.age = 20;
  person1.name = "Seun";

  cout << "Name: " << person1.name << endl;
  cout << "Age: " << person1.age << endl;
  
  
 
  return 0;   
}