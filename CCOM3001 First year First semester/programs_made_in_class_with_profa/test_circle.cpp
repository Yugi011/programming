
#include <iomanip>     
#include <iostream>     
#include <cmath>        
using namespace std;

int main()
{
    // Declare variables for radius, area, and circumference
    float radius, area, circumference;
    
    // Prompt the user to enter the radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area and circumference using the value of M_PI
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    // Set output to show two decimal places
    cout << fixed << setprecision(2);

    
    cout << endl << "Circle" << endl; // Title
    cout << "--------------------------" << endl; // Separator
    //display results
    cout << left << setw(15) << "Radius = " << right << setw(10) << radius << endl; 
    cout << left << setw(15) << "Area = " << right << setw(10) << area << endl; 
    cout << left << setw(15) << "Circumference = " << right << setw(10) << circumference << endl;
    cout << "--------------------------" << endl; // Separator

    // End of program
    return 0;
}