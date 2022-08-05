//program to find largest and smallest number
#include <iostream>
using namespace std;
int main(){
	int i, n, smallest, largest;
	cout << "Enter the amount of numbers: ";
	cin >> n;
	int list[n];
	
	for(i=0; i<n; i++){
		cout << "Enter number " << i+1 << ": ";
		cin >> list[i];
	}
	
	smallest = largest = list[0]; //setting the smallest and smallest number to the first item in the array
	
	for(i=1; i<=n; i++){
		if(list[i] >largest){
			largest = list[i];
		}
		if(list[i] < smallest){
			smallest = list[i];
		}
	}
	cout<<"\nThe smallest number among is = " <<smallest;
	cout<<"\nThe largest number among is = " <<largest; 

	return 0;
}
