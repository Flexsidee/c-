/2/This program is used to find the sum of the first ten terms of an arithemtic progressionlllllllllllllllllllllll
/4.l
#include <iostream>
using namespace std;


float sumAp(int firstTerm, int commonDiff, int numOfTerms){
	return (numOfTerms / 2) 
	* ((2 * firstTerm) + 
	((numOfTerms - 1) * commonDiff));
}
int main(){
	int a = 1, d= 1, n= 10;
	
	float result = sumAp (a, d, n);
	
	cout << "The sum of the first ten terms of the arithemetic progression is " << result ;
	
	return 0;
}
