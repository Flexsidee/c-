//program to print all prime numbers from 1 to the number user inputs
#include <iostream>
using namespace std;
int main(){
	int x , y , n;
	cout << "Enter number where you want to check the prime numbers: ";
	cin >> n;
	cout << "Prime numbers from 1 to " << n << " are; ";
	for (x = 2; x <= n; x++){
		bool prime = true;
		for(y = 2; y < x; y++){
			if( x % y == 0){
				prime = false;	
			}
		}
		if(prime){
			cout << x << ", ";
		}
	}
	
	return 0;
}
