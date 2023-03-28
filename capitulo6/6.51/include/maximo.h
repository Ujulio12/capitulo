#ifndef MAXIMO_H
#define MAXIMO_H


int maximo( int valor1, int valor2, int valor3 )
{
 int valorMaximo = valor1; // asume que valor1 es el máximo
 // determina si valor2 es mayor que valorMaximo
 if ( valor2 > valorMaximo )
 valorMaximo = valor2;
 // determina si valor3 es mayor que valorMaximo
 if ( valor3 > valorMaximo )
 valorMaximo = valor3;
 return valorMaximo;
} // fin de la plantilla de función maxim

#endif // MAXIMO_H
