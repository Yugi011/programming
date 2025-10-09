//leer un numero positivo y mostrar las sumas desde el uno hasta ese numero
#include <iostream>
#include <cstdlib>  // Biblioteca para funciones de generación de números aleatorios
#include <ctime>    // Biblioteca para funciones de tiempo
using namespace std;    
int main()
{
int n, suma, contador;
cout << "Ingrese un numero positivo: ";
cin >> n;

contador = 0;
suma = 0;
while (contador <= n)
{
    suma = suma + contador;
    contador++;
}
cout << "La suma desde 1 hasta " << n << " es: " << suma << endl;
return 0;
}