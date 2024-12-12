#include<iostream>;
using namespace std;

int factorial(int n) {
	while (true) {
		if (n > 1) {
			return n * factorial(n - 1);
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main() {
	unsigned int n;
	
	cout << "Please enter the value of n" << endl;
	cin >> n;



	int output;
	output = factorial(n);
	cout << "The result is: " << output << endl;
	return 0;
}