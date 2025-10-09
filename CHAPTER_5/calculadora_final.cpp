#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    char opcion, continuar = 's';
    
    while (continuar == 's') {
        cout << " CALCULADORA BÁSICA " << endl;
        cout << "Entre dos valores enteros: ";
        cin >> a >> b;
        
        cout << "\nOperaciones básicas:" << endl;
        cout << "a. sumar" << endl;
        cout << "b. restar" << endl;
        cout << "c. multiplicar" << endl;
        cout << "d. dividir" << endl;
        cout << "e. residuo" << endl;
        cout << "Entre opción deseada: ";
        cin >> opcion;
        
        cout << "Resultado:" << endl;
        switch (opcion)
        {
            case 'a':
                cout << "Suma: " << a << " + " << b << " = " << (a + b) << endl;
                break;
                
            case 'b':
                cout << "Resta: " << a << " - " << b << " = " << (a - b) << endl;
                break;

            case 'c':
                cout << "Multiplicación: " << a << " * " << b << " = " << (a * b) << endl;
                break;

            case 'd':
                if (b != 0) {
                    cout << "División: " << a << " / " << b << " = " << fixed << setprecision(2) << (double)a / b << endl;
                } else {
                    cout << "Error: No se puede dividir por cero" << endl;
                }
                break;

            case 'e':
                if (b != 0) {
                    cout << "Residuo: " << a << " % " << b << " = " << (a % b) << endl;
                } else {
                    cout << "Error: No se puede calcular residuo con divisor cero" << endl;
                }
                break;
                
            default:
                cout << "Opción inválida. Use a, b, c, d o e" << endl;
                break;
        }
        
        cout << "\n¿Desea usar la calculadora nuevamente? (s/n): ";
        cin >> continuar;
    }
    
    cout << "¡Gracias por usar la calculadora!" << endl;
    
    return 0;
}