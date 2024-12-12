#include<iostream>;
#include<cstdlib>;
#include<vector>;
#include<string>;
#include<algorithm>
using namespace std;

int main() {
	const int n = 100;
	vector<double> x(n);
	vector<double> y(n);

	for (int i = 0; i < 100; ++i) {
		x[i] = (double)rand() / RAND_MAX;
		y[i] = (double)rand() / RAND_MAX;
	}

	vector<double> z(n);
	auto itx = x.begin();
	auto ity = y.begin();
	auto itz = z.begin();
	for (; itx != x.end(); ++itx, ++ity, ++itz) {
		*itz = *itx + *ity;
		cout << *itz << endl;
	}

	for (int i = 0; i < n - 10; ++i) {
		z.pop_back();
	}

	cout << "The new one is:" << endl;
	for (auto a : z) {
		cout << a << endl;
	}

	cout << "Enter integers, each on a new line. Blank line terminates."
		<< endl;
	vector<int> user;
	string str;
	while (getline(cin, str)) {
		if (str == "") {
			break;
		}	

		user.push_back(atoi(str.c_str()));
		cout << "Size of vector: " << user.size() << endl;
		return 0;
	}
}
