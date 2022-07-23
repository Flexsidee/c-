//program to find the area of a circle by accepting radius as input from the user
#include <iostream>
using namespace std;

float areaOfCircle(float r){
    return 3.142 * r * r;
}

int main(){
    float r, area;
    
    cout << "Enter the radius of the circle : ";
    cin >> r;

    area = areaOfCircle(r);

    cout << "The area of the circle = " << area;

    return 0;
}