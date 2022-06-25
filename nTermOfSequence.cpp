/*
Name: Somade Daniel Oluwaseunfunmi
Matric No: 21/8874
Department: 200 Level Computer Science
Week: 4-5
Question (b): Write a C++ program to generate the first n terms of the sequence
*/

#include <iostream>
#include <math.h>
using namespace std;

float nTermOfAP(float a, float d, float n){
     return a + ( (n - 1) * d);
}

float nTermOfGP(float a, float r, float n){
     return a * (pow(r, n-1)); 
}


int main(){
    float firstTerm, secondTerm, thirdTerm, commonDiff, commonRatio;
    int nthTerm;

    cout << "Enter the first number of the series ";
    cin >> firstTerm;
n
    cout << "Enter the second number of the series ";
    cin >> secondTerm;

    cout << "Enter the second term of the sequence ";
    cin >> thirdTerm;

    cout << "Enter the number of terms of the sequence you want to get ";
    cin >> nthTerm;

    cout << "================" << endl;

    if( (secondTerm - firstTerm) == (thirdTerm - secondTerm) ){
        commonDiff = secondTerm - firstTerm;
        cout << "The first " << nthTerm << " terms of the arithemetic sequence = ";
        for(int i = 1; i <= nthTerm; i++){
            cout << nTermOfAP(firstTerm, commonDiff, i) << ", ";
        }
    }else if((secondTerm / firstTerm) == (thirdTerm / secondTerm)){
        commonRatio = secondTerm / firstTerm;
        cout << "The first " << nthTerm << "terms of the goemetric sequence = ";
        for(int i = 1; i <= nthTerm; i++){
            cout << nTermOfGP(firstTerm, commonRatio, i) << ", ";
        }
    }else{
        cout << "This sequence is neither arithmetic nor geometric progression";
    }

    cout << endl;

    return 0;
}