#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,a2,b2,s,r,p,c;
	cout << "pervoe chislo: ";
	cin >> a;
	cout << "vtoroe chislo: ";
	cin >> b;
	a2 = a*a;
	b2 = b*b;
	s = a2+b2;
	r = abs(a2-b2);
	p = a2*b2;
	c = a2/b2;
	cout << "Suma: " << s << endl;
	cout << "Raznost': " << r << endl;
	cout << "Proizvedenie: " << p << endl;
	cout << "Chastnoe: " << c;
	return 0;
}
