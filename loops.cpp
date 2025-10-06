#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, sum, rest, mult, div;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    sum = a + b;
    rest = a - b;
    mult = a * b;
    cout << endl;
    if (b != 0) 
    {
        div = a / b;
        cout << "División: " << div << endl;
    } 
    else 
    {
        cout << "Error: Division por cero" << endl;
    }
    cout << "Suma: " << sum << endl;
    cout << "Resta: " << rest << endl;
    cout << "Multiplicación: " << mult << endl;
    return 0;
}