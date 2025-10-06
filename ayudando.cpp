#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string firstName, lastName;
    float testScore, sum=0;
    char grade = ' ';
    int count = 0;
    ifstream inFile;
    ofstream outFile;
    inFile.open("test2.txt");
    if (!inFile)
    {
        cout << "Error opening input file." << endl;
        return 1;
    }
    else 
    {
        cout << "File opened successfully." << endl;
        outFile.open("ccom3001.out");
        outFile << fixed << setprecision(2);
        inFile >> firstName >> lastName;
        inFile >> testScore;
        while (inFile)
        {
            inFile >> testScore;
            inFile >> firstName >> lastName;
            cout<< firstName << " " << lastName << " " << testScore << endl;
    }
}
sum = sum + testScore;
count++;
switch (int(testScore)/10)
{
    case 10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F'; break;
}
outFile << firstName << " " << lastName << " " << testScore << " " << grade << endl;
cout << "Number of scores = " << count << endl;
cout << "Average score = " << (sum/count) << endl;
outFile << "Number of scores = " << count << endl;  
outFile << "Average score = " << (sum/count) << endl;