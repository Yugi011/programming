#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cuota_tecnologica = 26, cuota_lab = 34, creditos_matriculados, year, costo_credito, total_matricula;
    string nombre_estudiante;
    char continuar;
    
    do {
        
        cout << "Entre Su Nombre: ";
        cin >> nombre_estudiante;
        cout << "Entre El Año en que fue admitido: ";
        cin >> year;
        cout << "Entre la cantidad de créditos en los que se matriculó: ";
        cin >> creditos_matriculados;
        
        
        if (year < 2020) {
            costo_credito = 30;
        } else if (year == 2020) {
            costo_credito = 40;
        } else if (year == 2021) {
            costo_credito = 44;
        } else if (year == 2022) {
            costo_credito = 46;
        } else { // year >= 2023
            costo_credito = 50;
        }
        
        
        total_matricula = (creditos_matriculados * costo_credito) + cuota_tecnologica + cuota_lab;
        
        
        
        cout << "Estudiante: " << nombre_estudiante << endl;
        cout << "Año de admisión: " << year << endl;
        cout << "Costo por crédito: $" << costo_credito << endl;
        cout << "Créditos matriculados: " << creditos_matriculados << endl;
        cout << "Costo de créditos: $" << (creditos_matriculados * costo_credito) << endl;
        cout << "Cuota tecnológica: $" << cuota_tecnologica << endl;
        cout << "Cuota de laboratorios: $" << cuota_lab << endl;
        cout << "TOTAL A PAGAR: $" << total_matricula << endl;
        
        
        cout << "¿Desea procesar otro estudiante? (s/n): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "¡Gracias por usar el sistema de cálculo de matrícula!" << endl;
    
    return 0;
}