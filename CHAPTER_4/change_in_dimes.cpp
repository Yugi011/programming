#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_centavos, quarters, dimes, nickels, pennies;
    int valor_quarter, valor_dime, valor_nickel, valor_penny;
    double cambio;
    
    
    valor_quarter = 25;
    valor_dime = 10;
    valor_nickel = 5;
    valor_penny = 1;
    
    cout << "=== CALCULADORA DE CAMBIO ===" << endl;
    cout << "Ingrese el cambio en dólares: ";
    cin >> cambio;
    
    
    total_centavos = cambio * 100;
    
    
    quarters = total_centavos / valor_quarter;
    total_centavos = total_centavos % valor_quarter;
    
    dimes = total_centavos / valor_dime;
    total_centavos = total_centavos % valor_dime;
    
    nickels = total_centavos / valor_nickel;
    total_centavos = total_centavos % valor_nickel;
    
    pennies = total_centavos / valor_penny;
    
    cout << endl;
    cout << "=== DESGLOSE DEL CAMBIO ===" << endl;
    cout << "Quarters (25): " << quarters << endl;
    cout << "Dimes (10): " << dimes << endl;
    cout << "Nickels (5): " << nickels << endl;   
    cout << "Pennies (1): " << pennies << endl;
    cout << "=========================" << endl;
    cout << "Total: $" << fixed << setprecision(2) << cambio << endl;
    
    return 0;
}