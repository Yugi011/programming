#include <iostream>
using namespace std;
int main ()
{

    float k=0, suma=0, num, promedio;
        for (k=0; k <= 4; k++)
        {
            cin >> num;
            suma+=num;
        }
    promedio = suma/4;
    cout << "su promedio es: " << promedio << endl;

}