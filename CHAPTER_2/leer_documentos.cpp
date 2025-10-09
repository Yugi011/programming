#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
int main ()
{
ifstream infile;
ofstream outfile;
double num1, num2, num3, resultado;
infile.open("infile.txt");
infile >> num1 >> num2 >> num3;
infile.close();
resultado = num1 + num2 * num3;
outfile.open("outfile.txt");
outfile << "The result of the arithmetic operation is =" << resultado << endl;
outfile.close();
return 0;
}