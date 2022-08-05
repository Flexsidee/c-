//program for total and average of four numbers
#include <iostream>
using namespace std;
int main(){
	int i, sum=0;
	float average;
	for(i=0; i<4; i++){
		int a;
		cout << "Enter number " << i+1 << ": ";
		cin >> a;
		sum +=a;
	}
	average = float(sum) / 4;
	cout << "The sum of the numbers is = " << sum << endl;
	cout << "The average of the numbers is = " << average;
	return 0;
}
