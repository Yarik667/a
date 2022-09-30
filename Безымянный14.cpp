#include<iostream>
using namespace std;
int main(){
	double l,r,s, pi = 3.14;
	cout << "dlina : ";
	cin >> l;
	r = l/(2*pi);
	s = pi*r*r;
	cout << "Radius: " << r << endl;
	cout << "Ploshyad': " << s;
	return 0;
}
