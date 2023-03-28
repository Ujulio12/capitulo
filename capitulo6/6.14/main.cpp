#include <iostream>
#include <cmath>

using namespace std;

float redondearEntero(float num);
float redondearDecimas(float num);
float redondearCentesimas(float num);
float redondearMilesima(float num);

int main()
{
float numero;

    cout << "Ingrese un valor para redondear ";
    cin >>  numero;

    cout << "\n "<< numero <<" ha sido redondeado de forma original a entera = " << redondearEntero(numero);
    cout << "\n "<< numero <<" ha sido redondeado de forma original a decima = " << redondearDecimas(numero);
    cout << "\n "<< numero <<" ha sido redondeado de forma original a centesima = " << redondearCentesimas(numero);
    cout << "\n "<< numero <<" ha sido redondeado de forma original a milesima = " << redondearMilesima(numero);

}

float redondearEntero(float num)
{
    float y = floor((num * 10) + 0.5);

    return y;
}

float redondearDecimas(float num)
{
    float y = floor(num  + 0.5)/100;

    return y;
}

float redondearCentesima(float num)
{
    float y = floor((num * 10) + 0.5)/10;

    return y;
}

float redondearCentesimas(float num)
{
    float y = floor(num * 100 + 0.5)/100;

    return y;
}

float redondearMilesima(float num)
{
    float y = floor(num * 1000 + 0.5)/1000;

    return y;
}
