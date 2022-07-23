#include <iostream>
using namespace std;

int main(){
	int a, n, m, sum = 0;
	cout << "Enter a  positive whole number: " ;
	cin >> n;
	
	if(n <= 0 ){
		cout << n << " is not a positive whole number";
	}else{
		a = n;
		while(n > 0){
			m = n % 10;
			sum += m;
			n = n / 10;
		}
		cout << "The sum of the digits of " << a << " = " << sum;
	}
	
	return 0;
}
