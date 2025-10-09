// leer dos numeros enteros
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int limite1, limite2, contador;
    cout << "Ingrese dos numeros enteros: ";
    cin >> limite1 >> limite2;

    contador = limite1;
if (limite1 < limite2)
{
    while (contador >= limite2)
    {
        cout << contador << " ";
        contador--;
    }
    cout << endl;
}
else
    {
        contador = limite2;
        while (contador >= limite1)
        {
            cout << contador << " ";
            contador--;
        }
    }
    return 0;
}