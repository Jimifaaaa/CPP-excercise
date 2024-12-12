#include<iostream>
#include<cmath>

using namespace std;

float lnyfun(float y, int N) {
	float yfraction = (y - 1) / (y + 1);
	float lny = 0;
	for (int i = 1; i < N+1; ++i) {
		lny += 2 /(2 * i - 1) * pow(yfraction, (2 * i - 1));
	}
	return lny;
}


int main() {
	//Predefined float and integer
	int N;
	float x;
	float y;


	//ask the user to give an input for x
	cout << "Please give a value for x" << endl;
	cin >> x;

	if (x <1) {
		cout << "Needs to be greater than 1" << endl;
	}

	//ask the user to give an input for N
	cout << "Please give a value for N" << endl;
	cin >> N;

	y = x + sqrt(x * x - 1);
	cout << y << endl;
	float acoshh = lnyfun(y, N);
	cout << acoshh << endl;

	float realacosh = acosh(x);
	cout << realacosh << endl;

	float diff = realacosh - acoshh;
	cout << "The absolute difference is: " << abs(diff) << endl;

	return 0;
}