#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double s, d, l, r, pi = 3.14;
	cout << "ploshyad kruga: ";
	cin >> s;
	r = sqrt(s/pi);
	d = r*2;
	l = pi*d;
	cout << "abzal poshly pokyrim: " << d << endl;
	cout << "Dlina : " << l;
	return 0;
}
