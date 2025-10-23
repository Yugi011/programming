#include <iostream> // 7 12 1 4 8 -1
using namespace std;
int main ()
{
    int numbers, min, max;

    max = 0;
    min = 9999;
    cout << "Entre numeros enteros positivos y termine con -1: ";
    cin >> numbers;  // Primera lectura ANTES del while
    
    while(numbers > 0) // o while(number > 0)
    {
        if (numbers < min )
        {
            min = numbers;
        }

        if ( numbers > max)
        {
            max = numbers;
        }
        cin >> numbers;  // Lectura siguiente
    }
    
    cout << "El minimo de la lista es: " << min << endl;
    cout << "El maximo de la lista es: " << max << endl;
    
    return 0;
}