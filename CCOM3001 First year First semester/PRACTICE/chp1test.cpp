#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double testScore1, testScore2, testScore3, testScore4, weightTestScore;
    cout << "ENTER SCORE FOR EXAM 1:";
    cin >> testScore1;
    cout << "ENTER SCORE FOR EXAM 2:";
    cin >> testScore2;
    cout << "ENTER SCORE FOR EXAM 3:";
    cin >> testScore3;
    cout << "ENTER SCORE FOR EXAM 4:";
    cin >> testScore4;
    weightTestScore = (testScore1 + testScore2 + testScore3 + testScore4) / 400;
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << setw(30) << right << "Weighted Test Score: " << weightTestScore * 100 << "%" << endl;
    cout << "-----------------------------------------------------------" << endl;
    return 0;
}