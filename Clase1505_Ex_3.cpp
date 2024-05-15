#include <iostream>
using namespace std;
int main()
{
    float angulo=0.00;
    cout << "Ingrese un angulo en grados para determinar si es recto, obtuso o agudo: \n";
    cin >> angulo;
    if (angulo >= 0)
    {
        if (angulo == 90)
        {
            cout << "El angulo ingresado es recto. \n";
        }
        else if (angulo >= 90)
        {
            cout << "El angulo ingresado es obtuso. \n";
        }
        else
        {
            cout << "El angulo ingresado es agudo. \n";
        }
    }
    else
    {
        cout << "Ingrese un angulo valido. \n";
    }
    cout<<angulo;
    return 0;
}