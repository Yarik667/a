#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double r1,r2,s1,s2,s3,pi=3.14;
	cout << " perviy radius: ";
	cin >> r1;
	cout << " vtoroy radius: ";
	cin >> r2;
	s1 = pi*r1*r1;
	s2 = pi*r2*r2;
	s3 = abs(s1-s2);
	cout << "Ploshyad 1 kruga: " << s1 << endl;
	cout << "Ploshyad 2 kruga: " << s2 << endl;
	cout << "Ploshyad 3: " << s3;
	return 0;
}
