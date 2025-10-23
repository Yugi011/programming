#include <iostream>
using namespace std;
int main ()
{

    float k=0, suma=0, num, promedio, n;
    cout << "Entre la cantidad de examenes: ";
    cin >> n;

        for (k=0; k <= n; k++)
        {
            cin >> num;
            suma+=num;
        }
    promedio = suma/n;
    cout << "su promedio es: " << promedio << endl;

}