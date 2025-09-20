
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
int main ()
{
    // declara outfile como archivo para imprimir y infile como archivo de leer
    ifstream infile;
    ofstream outfile;

    //declara variables
    double num1, num2, num3;

    //abre documentos
    infile.open("LDMS.txt");

    //declara valores del archivo a variables en el orden dicho
    infile >> num1 >> num2 >> num3;

    //cierra el archivo de donde se lee ya que no se va volver a usar
    infile.close();

    //operacion aritmetica
    num1 * num2 / num3;

    //abre archivo donde see imprimiran resultados de la operacion aritmetica "ESTE ARCHIVO NO DEBE SER CREADO COMO INFILE DEBIDO QUE OUTFILE LO CREA EL SISTEMA"
    outfile.open("LDMSResults.txt");

    //todo numero sera limitado a 4 lados decimales en el archivo donde se imprime
    outfile << fixed << setprecision(4);

    //mensaje y que se imprimira en el archivo
    outfile << setw(4) << left << "The results are🤔: " << (num1 * num2 / num3 ) << endl;

    //end
    return 0;
}
