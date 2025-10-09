#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
int number_secret, tries, count=0;
char play;
srand(time(0));
number_secret = rand() % 10 + 1; // Numero aleatorio entre 1 y 100
play = 's';

while (play == 's')
{
    cout << "Adivina el numero secreto (entre 1 y 100): ";
    cin >> tries;
    if (tries < number_secret)
        cout << "Demasiado bajo! Intenta de nuevo." << endl;
    else if (tries > number_secret)
        cout << "Demasiado alto! Intenta de nuevo." << endl;
    else
    {
        cout << "Felicidades! Adivinaste el numero secreto!" << endl;
        break;
    }
    cout << "Quieres jugar de nuevo? (s/n): ";
    cin >> play;
    count++;
}

cout << "Total de intentos: " << count << endl;
return 0;
}