# include <windows.h>
# include <cmath>
 
using namespace std;
 
int main ()
 
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  double a, b;
  double c, P;
  cout << "??????? ????? a: ";
  cin >> a;
  cout << "??????? ????? b: ";
  cin >> b;
 
  c=sqrt(a*a+b*b);
  P=a+b+c;
  cout << "?????????? c= " << c << endl;
  cout << "???????? P= " << P << endl;
 
  system ("pause");
  return 0;
}
