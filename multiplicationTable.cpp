#include <iostream>
using namespace std;

//This function is used to display the multiplication table to the length given by the user
void multiplicationTable (int num){
	int i,j;
	
	cout << "This is a multiplication table of 1-" << num << endl;
	cout << "------------------------------------" << endl;
	for(i=1; i<= num; i++){
		for(j=1; j<13; j++){
			cout << i << " x " << j << " = " << (i * j) << "\t";
		}
		cout << endl;
	}
}

int main(){
	int num;
	
	cout << "You want the multiplication table of 1 to which number ?? ";
	cin >> num;
	cout << endl;
	
//	calling the table function and inputing the size of the table declared by the user
	multiplicationTable(num);
	
	return 0;
}
