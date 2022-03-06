//this program is used to generate multiplication table of 1 - 15 using while loop
#include <iostream>
using namespace std;

int main(){
int n=1;

while(n <= 15){
	int x = 1;
	while(x <=12){
		cout << n << " x " << x << " = " << (n * x) << endl;
		x++;
	}
	cout << endl;
	n ++;
}
	
	return 0;
}
