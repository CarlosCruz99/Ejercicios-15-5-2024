#include <iostream>
using namespace std;
int main()
{
    float angulo_1 = 0.00, angulo_2 = 0.00, resultado = 0.00, suma = 0.00;
    cout << "Ingrese dos angulos de un triangulo para calcular el tercero: \n";
    cout << "Primer angulo: \n";
    cin >> angulo_1;
    cout << "Segundo angulo: \n";
    cin >> angulo_2;
        if((angulo_1<=0 || angulo_2<=0) || (angulo_1>=180 || angulo_2>=180))
        {
            cout<<"Uno de los angulos digitados es invalido. \n";
        }
        else
        {
        suma = angulo_1 + angulo_2;
        resultado = 180 - suma;
        cout << "El tercer angulo es: " << resultado << "\n";
        }
    return 0;
}