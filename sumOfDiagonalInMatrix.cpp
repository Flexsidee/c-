#include <iostream>
#define SIZE 10

using namespace std;

int main(){
	int  i, j, x, y, n, sum;
	float matrix[SIZE][SIZE];
	
	sum = 0; //set the value of the sum of the diagonals to zero at first
	
	cout << "which nXn matrix is this ";
	cin >> n ;
	
	 //intialize the 3x3 matix to empty array
	
	cout<<"Enter Coefficients of the Matrix: "<< endl;
	
	for(i = 0; i<n; i++){
	  for(j = 0; j<n; j++){
		  cout << "a[" << i+1 << "][" << j+1 << "]= ";
		  cin >> matrix[i][j];
	  }
	} 
  
	for(x=0; x<n ; x++){
		for(y= 0; y<n; y++){
//			cout << matrix[x][y] << endl; //use this line of code to print out all the values of the matrix 
			if(matrix[x] == matrix[y]){
				sum += matrix[x][y]; // add the diagonals to the sum
			}
		}
	}

	cout <<"The sum of the diagonals of the matrix is " << sum; //print the value of the sum of the diagonals to the screen
	
	return 0;
}
