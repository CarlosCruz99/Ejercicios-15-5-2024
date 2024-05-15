#include <iostream>
using namespace std;
int main()
{
    string nombre;
    float corto1 = 0.00, corto2 = 0.00, parcial1 = 0.00, parcial2 = 0.00, lab = 0.00, proyecto = 0.00, resultado = 0.00;
    cout << "Programa para calcular su promedio final de la materia \n";
    cout << "Ingrese su nombre: \n";
    cin >> nombre;
    cout << "Ingrese su nota del corto 1, solo se aceptan valores positivos para las notas y en base 10: \n";
    cin >> corto1;
    cout << "Ingrese su nota del corto 2: \n";
    cin >> corto2;
    cout << "Ingrese su nota del primer parcial: \n";
    cin >> parcial1;
    cout << "Ingrese su nota del segundo parcial: \n";
    cin >> parcial2;
    cout << "Ingrese su nota del laboratorio: \n";
    cin >> lab;
    cout << "Ingrese su nota del proyecto: \n";
    cin >> proyecto;
    if (((corto1 || corto2 || parcial1 || parcial2 || lab || proyecto) < 0) || ((corto1 || corto2 || parcial1 || parcial2 || lab || proyecto) > 10))
    {
        cout << "Solo se aceptan valores positivos y en base 10. \n";
    }
    else
    {
        resultado = ((corto1 * 0.1) + (corto2 * 0.1) + (parcial1 * 0.15) + (parcial2 * 0.2) + (lab * 0.2) + (proyecto * 0.25));
        if (resultado >= 6.0)
        {
            cout << "Usted ha pasado la materia con: " << resultado << ". \n";
        }
        else
        {
            cout << "Usted no ha pasado la materia y su nota final es: " << resultado << ". \n";
        }
    }
}