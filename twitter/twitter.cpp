// twitter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
#include <cmath>
using namespace std;
// This program finds the area of a circle.
int main()
{
	double radiusOfcircle;
	double areaOfcircle;
 const double PI = 3.14;

	cout << "Enter radius of the given circle in inches: " << endl;
	cin >> radiusOfcircle;
	areaOfcircle = PI * pow(radiusOfcircle,2.0);
	cout << "Area of the circle is " << areaOfcircle <<" square inches." <<endl;
	return 0;
}