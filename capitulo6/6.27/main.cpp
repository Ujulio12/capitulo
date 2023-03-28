#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    cout << "Ingrese tres números" << endl;
    cin >> x >> y >> z;
    if (x<y && x<z)
    {
        cout << "El menor es: " << x <<endl;
    }
    if (y<x && y<z)
    {
        cout << "El menor es: " << y <<endl;
    }
    if (z<x && z<y)
    {
        cout << "El menor es: " << z <<endl;
    }
    return 0;
}
