#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    // Declare variables for width and height
    float width, height, perimeter, area;

    // ask user for width
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // ask user for height
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // Calculate perimeter and area
    perimeter = 2 * (width + height);
    area = width * height;

    // Set output formatting to 2 decimal places
    cout << fixed << setprecision(2);

    cout << endl << "Rectangle" << endl; // Title
    cout << "----------------------------" << endl; // Separator
    // Print values with setw and alignment
    // display results
    cout << left << setw(12) << "Width:" << right << setw(10) << width << endl;
    cout << left << setw(12) << "Height:" << right << setw(10) << height << endl;
    cout << left << setw(12) << "Perimeter:" << right << setw(10) << perimeter << endl;
    cout << left << setw(12) << "Area:" << right << setw(10) << area << endl;
    cout << "----------------------------" << endl; // Separator
    return 0;
}
