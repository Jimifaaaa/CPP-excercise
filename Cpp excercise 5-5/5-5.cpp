#include<iostream>;
using namespace std;

bool testprime(int n) {
	for (int j = 2; j < n; ++j) {
		if ((n % j) == 0){
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cout << "Please enter the max desired number for test" << endl;
	cin >> n;

	for (int i = 2; i < n; ++i) {
		if (testprime(i)) {
			cout << "The test number: " << i << " is a prime number" << endl;
		}
		else {
			cout << "The test number: " << i <<" is not a prime number" << endl;
		}
	}
	return 0;
}