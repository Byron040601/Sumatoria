#include <iostream>
using namespace std;

int suma(int num1, int num2);
int main ()
{
    int x, y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;
    while (x < 0 && y < 0 || x < 0 && y > 0 || x > 0 && y < 0)
        {
            cout << "Ingrese dos numeros: ";
            cin >> x >> y;
        }
    cout << "La suma de los numeros comprendidos entre " << x << " Y " << y << " es: " << suma(x, y);
}

int suma(int num1, int num2)
{
    int sumatorio;
    sumatorio = 0;

    for (int i = num1; i <= num2; i++)
            {
                sumatorio = sumatorio + i;
            }
    return sumatorio;
}
