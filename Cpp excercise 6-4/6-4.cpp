#include<iostream>
#include<string>

using namespace std;

namespace mymath {
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

	unsigned long binomial(int n, int k) {
		// We cannot choose more than we have
		if (n < k) {
			throw logic_error(
				"binomial: n must be greater than or equal to k.");
		}

		// Return result, calculated in terms of factorials
		return factorial(n) / factorial(k) / factorial(n - k);
	}
}

int main() {
	int k;
	int n;
	string input = ""; //input buffer

	try {
		cout << "Please enter value for n" << endl;
		getline(cin, input);
		n = stoi(input);


		cout << "Please enter value for k" << endl;
		getline(cin, input);
		k = stoi(input);

		unsigned int nck = mymath::binomial(n, k);
		cout << "(" << n << "," << k << ") = " << nck << endl;

	}

	catch (const invalid_argument& e) {
		cout << "Error in input: " << e.what() << endl;
		return 1;
	}
	catch (const logic_error& e) {
		cout << e.what() << endl;
		return 2;


	}



}