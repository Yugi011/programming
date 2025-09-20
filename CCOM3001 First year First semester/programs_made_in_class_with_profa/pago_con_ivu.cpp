#include <iomanip>    
#include <iostream>     
#include <cmath>        
using namespace std;

int main()
{
	// Declare variables for amount, IVU rate, IVU value, and total
	float amount, ivu_rate, ivu, total;

		// Ask the user to enter the amount
		cout << "Enter the amount: ";
		cin >> amount;

		// Ask the user to enter the IVU rate (percentage)
		cout << "Enter the IVU rate (%): ";
		cin >> ivu_rate;

		// Calculate the IVU value
		ivu = amount * ivu_rate / 100.0;

		// Calculate the total amount including IVU
		total = amount + ivu;

		// Set output to show two decimal places
		cout << fixed << setprecision(2);

		// Display formatted results
		cout << endl << "Payment with IVU" << endl; // Title
		cout << "---------------------------" << endl; // Separator
		//display results
		cout << left << setw(15) << "Amount = " << right << setw(10) << amount << endl; 
		cout << left << setw(15) << "IVU = " << right << setw(10) << ivu << endl; 
		cout << left << setw(15) << "Total = " << right << setw(10) << total << endl; 
		cout << "---------------------------" << endl; // Separator

		// End of program
		return 0;
}