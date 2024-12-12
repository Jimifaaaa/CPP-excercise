#include<iostream>;
using namespace std;

int main() {
	///ask input from user

	int R;
	cout << "please type the radius" << endl;
	cin >> R;

	const double pi = 3.1415;

	double V = 4 * pi * R * R * R / 3;
	double A = 4 * pi * R * R;

	cout << "The volume is: " << V << endl;
	cout << "The surface area is: " << A << endl;
	return 0;
}




