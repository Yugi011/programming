// Imprimir los numeros del 10 al 1 en orden descendente
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int contador;
    contador = 10;
    while (contador >= 1)
    {
        cout << contador << " ";
        contador--;
    }
    cout << endl;
    return 0;
}