#include <iostream>

using namespace std;

int main()
{
 a) template < class A >
int suma( int num1, int num2, int num3 )
{
//SUMA NO SE UTILIZA
 return num1 + num2 + num3;
}
b) void imprimirResultados( int x, int y )
{
 cout << "La suma es " << x + y << '\n';
 //EL \n DEBE LLEVAR ""
 return x + y;
}
c) template < A >
//  FALTA LA CLASE
A producto( A num1, A num2, A num3 )
{
 return num1 * num2 * num3;
}
d) double cubo( int );
int cubo( int );
//FALTA UNA VARIABLE QUE DECLARAR CON EL INT
}
