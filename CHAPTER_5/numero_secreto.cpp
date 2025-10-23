#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int numeroSecreto, intentos, intentoUsuario;
    
    // Asignar el número por adivinar (57 como especificado)
    numeroSecreto = 57;
    intentos = 5;
    
    // Mensaje de bienvenida y reglas
    cout << "¡Bienvenido al Juego de Adivinar un Número!" << endl;
    cout << "Intente adivinar un número entre 1 y 100." << endl;
    cout << "Tiene un total de 5 intentos." << endl;
    
    // Bucle del juego
    while (intentos > 0) {
        cout << "Ingresa tu el numero: ";
        cin >> intentoUsuario;
        
        // Verificar si adivinó
        if (intentoUsuario == numeroSecreto) {
            cout << "¡Felicidades! Has adivinado el número." << endl;
            cout << "¡Gracias por jugar!" << endl;
            return 0;
        }
        
        // Dar pistas
        if (intentoUsuario > numeroSecreto) {
            cout << "El número es menor que el intento anterior." << endl;
        } else {
            cout << "El número es mayor que el intento anterior." << endl;
        }
        
        // Reducir intentos
        intentos--;
        
        // Mostrar intentos restantes
        if (intentos > 0) {
            cout << "Te quedan " << intentos << " intentos." << endl;
        }
    }
    
    // Si agotó los intentos
    cout << "¡Agotaste tus intentos! El número secreto era " << numeroSecreto << "." << endl;
    cout << "¡Gracias por jugar!" << endl;
    
    return 0;
}
