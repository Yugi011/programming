#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//This Program calculates the perimeter and area of a triangle.
float a, b, c, s, p, area;

//read sides
cout<<"enter the length of side a";
cin>>a;
cout<<"enter the length of side b";
cin>>b;
cout<<"enter the length of side c";
cin>>c;

//calculate perimeter and area
p = a + b + c;
s = p / 2; // semi-perimeter
area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula

cout << endl << "Triangle" << endl; // Title
cout << "----------------------------" << endl; // Separator
// display results
// Set output to show two decimal places
cout << fixed << setprecision(2);
cout << left << setw(15) << "Side a = " << left << setw(10) << a << endl;
cout << left << setw(15) << "Side b = " << left << setw(10) << b << endl;
cout << left << setw(15) << "Side c = " << left << setw(10) << c << endl;
cout << left << setw(15) << "Perimeter = " << left << setw(10) << p << endl;
cout << left << setw(15) << "Area = " << left << setw(10) << area << endl;
cout << "----------------------------" << endl; // Separator    

//end of program
return 0;
}