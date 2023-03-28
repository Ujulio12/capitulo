#include <iostream>
#include <cmath>

using namespace std;

double funcionHipotenusa(double l1, double l2);

int main()
{
    double val1 = 3.0, val2 = 4.0, val3 = 5.0, val4 = 12.0, val5 = 8.0, val6 = 15.0;


    cout << "\n\tLa hipotenusa del triagnulo 1 es = " << funcionHipotenusa(val1,val2);
    cout << "\n\tLa hipotenusa del triagnulo 2 es = " << funcionHipotenusa(val3,val4);
    cout << "\n\tLa hipotenusa del triagnulo 3 es = " << funcionHipotenusa(val5,val6);

}

double funcionHipotenusa(double l1, double l2)
{

    double hipotenusa;
    hipotenusa = sqrt((pow(l1,2)+pow(l2,2)));

    return hipotenusa;
}
