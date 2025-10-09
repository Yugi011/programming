#include <iostream>
using namespace std;
int main() {
double peso;
cout << "Ingrese el peso de la caja en libras: ";
cin >> peso;

if ( peso <= 15) {
cout << "El cargo es $20" << endl;

} else if (peso <= 30) {
cout << "El cargo es $25" << endl;

} else if (peso <= 40) {
cout << "El cargo es $32" << endl;

} else if (peso <= 50) {
cout << "El cargo es $45" << endl;

} else (peso > 50);
cout << "No se puede utilizar este servicio" << endl;
{
return 0;
}
}