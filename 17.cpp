#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,ac,bc,s;
	cout << " a: ";
	cin >> a;
	cout << " b: ";
	cin >> b;
	cout << " c: ";
	cin >> c;
	ac = abs(a-c);
	bc = abs(b-c);
	s = ac+bc;
	cout << " AC: " << ac << endl;
	cout << " BC: " << bc << endl;
	cout << " AC=BC: " << s;
	return 0;
}
