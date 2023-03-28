#include <iostream>
#include <cstdlib>
#include <stdio.h>
//invierte el numero
using namespace std;

int main ()
{
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    while (n >= 10){
    cout << ("%d", n % 10);
    n /= 10;
    }
    cout << ("%d", n);
}
