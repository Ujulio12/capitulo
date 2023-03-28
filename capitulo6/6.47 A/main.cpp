a) float cubo( float ); //NO TIENE UNA VARIABLE DENTRO DEL PARENTESIS // prototipo de función
cubo( float numero ) // definición de función
{
 return numero * numero * numero;
}
b) int numeroAleatorio = srand(); //LA FUNCION SRAND NO TIENE NADA ADENTRO
c) float y = 123.45678;
int x;
x = y;
cout << static_cast< float >( x ) << endl;
//ES NECESARIO DOS <<
d) double cuadrado( double number )
{
 double numero = 0;
 return numero * numero;
} //NO ES LO MISMO NUMBER QUE NUMERO SE NECESITA EL MISMO NOMBRE
e) int suma( int n )
{
 if ( 0 == n )
 return 0;
 else
 return n + suma( n );
}//HAY DOS RETURN
