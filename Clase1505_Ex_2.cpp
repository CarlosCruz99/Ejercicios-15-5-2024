#include <iostream>
using namespace std;
int main()
{
    int edad=0;
    cout << "Ingrese su edad para determinar si usted mayor o menor de edad: \n";
    cin >> edad;
    if (edad >= 0)
    {
        if (edad >= 18)
        {
            cout << "Usted es mayor de edad. \n";
        }
        else
        {
            cout << "Usted es menor de edad. \n";
        }
    }
    else
    {
        cout << "Ingrese una edad valida \n";
    }
}
