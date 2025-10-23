#include <iostream>
using namespace std;

int main()
{
    int lado_derecho, lado_superior;
    cout << endl;

    cout << "--- TABLA DE MULTIPLICAR 5x5 ---" << endl;
    cout << endl;
    
    for(lado_derecho = 1; lado_derecho <= 5; lado_derecho++)
    {
        for(lado_superior = 1; lado_superior <= 5; lado_superior++)
        {
            cout << lado_derecho * lado_superior << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    cout << "Tabla completada!" << endl;
    
    return 0;
}