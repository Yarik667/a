# include <windows.h>
# include <cmath>
 
using namespace std;
 
int main ()
 
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  double a, b;
  double c, P;
  cout << "Vvedite perv'iy katet a: ";
  cin >> a;
  cout << "Vvedite vtoroy katet b: ";
  cin >> b;
 
  c=sqrt(a*a+b*b);
  P=a+b+c;
  cout << "Àbzal poshly pokyrim: " << c << endl;
  cout << "Perimetr:" << P << endl;
 
  system ("pause");
  return 0;
}
