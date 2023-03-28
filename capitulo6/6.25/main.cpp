#include <iostream>

using namespace std;

int main()
{
    int h,m,s,fh,fm,fs;
    cout << "Ingrese el número de horas" << endl;
    cin >> h;
    cout << "Ingrese el número de minutos" << endl;
    cin >> m;
    cout << "Ingrese el número de segundos" << endl;
    cin >> s;
    if (h>12 || m>60 || s>60)
    {
        cout << "valores fuera de rango";
    }
    else
    {
        if(s==60)
        {
            m=m+1;
            s=0;
        }
        if(m==60)
        {
            h=h+1;
            m=0;
        }
        if(h==12)
        {
            h=0;
        }
        fs=h*3600+m*60+s;
        cout << "Pasaron: " << fs << " Segundos" << endl;
    }
   return 0;
}
