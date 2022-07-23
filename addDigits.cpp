/* 
    Name: Somade Daniel Oluwaseunfunmi
    Matric No: 21/8874
    Week: 4-5
    Question (a): program to find the sum of all the individual digits of a given input number
*/

#include <iostream>
using namespace std;

int main(){
    int n, a, m , sum = 0;
    cout << "Enter a postive whole number: " ;
    cin >> n;
    

    if(n < 0){
        cout << n << " is not a positive number";
    }else{
        a = n;
        while (n > 0){
            m = n % 10;
            sum +=m;
            n = n/10;
        }
    cout << "The sum of the digits " << a  << " = "<< sum ;
    }
        

    return 0;
}