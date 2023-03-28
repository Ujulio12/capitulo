 // Ejercicio 6.44: ej06_44.cpp
 // ¿Qué hace este programa?
 #include <iostream>
 using namespace std;

 int misterio( int, int ); // prototipo de función

 int main()
 {
// define las variables x y y
 int x = 0;
 int y = 0;
// Permite ingresar los valores
 cout << "Escriba dos enteros: ";
 cin >> x >> y;
 // imprime el resultado de la multiplicación
 cout << "El resultado es " << misterio( x, y ) << endl;
 } // fin de main

 // el parámetro b debe ser un entero positivo para prevenir la recursividad infinita
 int misterio( int a, int b )
 {
 if ( 1 == b ) // caso base
// regresa el valor de a si b es exactamente igual a uno
 return a;
 else // paso recursivo
 {
      return a + misterio( a, b - 1 );
 }
}
