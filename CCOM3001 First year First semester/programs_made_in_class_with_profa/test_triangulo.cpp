#include <iostream>
#include <cmath>
 #include <iomanip>
using namespace std;
int main()
{
//This Program calculates the perimeter and area of a triangle.
float a, b, c, s, p, area;

//read sides
	cout << "enter the length of side a";
cin>>a;
	cout << "enter the length of side b";
cin>>b;
	cout << "enter the length of side c";
cin>>c;

	// Calculate perimeter and area without validation
	p = a + b + c;
	s = p / 2; // semi-perimeter
	area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula

	// Set output to show two decimal places
	cout << fixed << setprecision(2);

	cout << endl << endl;
	cout << "Triángulo" << endl; // Title
	cout << "--------------------------" << endl; // Separator
	// display results
	cout << left << setw(15) << "Lado a = " << right << setw(10) << a << endl;
	cout << left << setw(15) << "Lado b = " << right << setw(10) << b << endl;
	cout << left << setw(15) << "Lado c = " << right << setw(10) << c << endl;
	cout << left << setw(15) << "Perímetro = " << right << setw(10) << p << endl;
	cout << left << setw(15) << "Área = " << right << setw(10) << area << endl;
	cout << "--------------------------" << endl; // Separator
}