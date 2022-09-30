#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2,a,b,p,s;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	a = abs(x2-x1);
	b = abs(y1-y2);
	p = (a+b)*2;
	s = a*b;
	cout << "Perimetr: " << p << endl;
	cout << "Ploshyad: " << s;
	SetConsoleCP(1251);
  
  double a, b;
  double c, P;
  cout << "Vvedite perv'iy katet a: ";
  cin >> a;
  cout << "Vvedite vtoroy katet b: ";
  cin >> b;
 
  c=sqrt(a*a+b*b);
  P=a+b+c;
  cout << "Gipotenuza: " << c << endl;
  cout << "Perimetr:" << P << endl;
 
  system ("pause");
	return 0;
}

