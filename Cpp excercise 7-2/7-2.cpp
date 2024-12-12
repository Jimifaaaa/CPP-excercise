
#include <iostream>;
#include<vector>;

using namespace std;

bool isPrime(int testprime, const vector<int>& smallerprime) {
	for (int prime : smallerprime) {
		if (testprime % prime == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	cout << "Please enter the max number to test prime" << endl;
	int range;
	cin >> range;

	std::vector<int> smallerprime;

	for (int j = 2; j < range; ++j) {
		cout << "The test number is: " << j << endl;
		if (isPrime(j, smallerprime)) {
			smallerprime.push_back(j);
			cout << "It is a prime number" << endl;
		}

		else {
			cout << "It is not a prime number" << endl;
		}
	}
	return 0;
}