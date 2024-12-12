#include<iostream>;
#include <cmath>
using namespace std;

int main() {
	const int c = 13;
	const int m = 65;
	const double g = 9.81;
	const double mgc= m * g / c;

	int t;
	cout << "please enter the time" << endl;
	cin >> t;

	double vt;
	vt = mgc * (exp(-(c * t) / m) - 1);
	cout << "velocity is: "<< vt << endl;
	return 0;
}