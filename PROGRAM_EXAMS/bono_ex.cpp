#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double x, y;
    char continuar;
    
    
    do {
        cout << "Ingrese las coordenadas del punto:" << endl;
        cout << "Coordenada x: ";
        cin >> x;
        cout << "Coordenada y: ";
        cin >> y;
        
        cout << "El punto (" << x << "," << y << ") ";
        
        
        if (x == 0 && y == 0) {
            cout << "está en el origen" << endl;
        }
        else if (x == 0) {
            cout << "está en el eje de y" << endl;
        }
        else if (y == 0) {
            cout << "está en el eje de x" << endl;
        }
        else if (x > 0 && y > 0) {
            cout << "está en el cuadrante I" << endl;
        }
        else if (x < 0 && y > 0) {
            cout << "está en el cuadrante II" << endl;
        }
        else if (x < 0 && y < 0) {
            cout << "está en el cuadrante III" << endl;
        }
        else  {
            cout << "está en el cuadrante IV" << endl;
        }
        
        cout << "¿Desea evaluar otro punto? (s/n): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "¡Gracias por usar el determinador de cuadrantes!" << endl;
    
    return 0;
}
