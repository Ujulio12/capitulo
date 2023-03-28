#include <iostream>
using namespace std;

bool PERFECTO(int n)
{
 int d;
 int suma = 0;
 for (d = 1; d < n; d++)
 {
  if (n%d == 0)
  {
   suma = suma + d;
  }
 }
 if (suma == n)
 {
  return true;
 }
 else
 {
  return false;
 }
}

int main()
{
 int n=1000;
 cout << "Los numeros perfectos son: " << endl;
 for (int i = 1; i < n; i++)
 {
  PERFECTO(i);
  if (PERFECTO(i) == true)
  {
   cout << i << endl;
  }
 }
 return 0;
}
