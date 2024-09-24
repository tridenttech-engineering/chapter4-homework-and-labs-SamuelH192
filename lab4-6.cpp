//Lab4-6.cpp - displays the area of a triangle
//Created/revised by Samuel Hollenbeck on 9/20/24

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	const double BASE = 11;
	const double HEIGHT = 13;
	double area = 0.0;

	//calculate and display area
	area = BASE * HEIGHT / 2;
	cout << "Area: " << area << endl;

	return 0;
	
}	//end of main function