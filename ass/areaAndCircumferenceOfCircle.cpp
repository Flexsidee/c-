//program to find area and circumference of cirlce
#include <iostream>
using namespace std;
int main(){
	float r, area, circumference, pie=3.142;
	cout << "Enter the radius of the cirlce: "; 
	cin >> r;
	circumference = 2 * pie * r;
	area = pie * r * r;
	cout << "The cirmcumference of the circle = " << circumference << endl;
	cout << "The area of the circle = " << area;
	return 0;
}
