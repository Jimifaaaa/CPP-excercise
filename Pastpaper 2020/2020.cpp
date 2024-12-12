#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

double Newton(vector<int> user, int x) {
	double x1 = 0;
	for (int i = 0; i < user.size(); ++i) {
		x1 += user[i] * pow(x, i);
	}
	return x1;
}

vector<int> Newtoncoefficient(vector<int> user) {
	int n = user.size();
	int newcoeiff = 0;
	vector <int> b;
	for (int i = 0; i < n - 1; ++i) {
		newcoeiff = user[i+1] * (i + 1);
		b.push_back(newcoeiff);
		cout << newcoeiff << endl;
	}
	return b;
}


int main() {

	//predefined value
	const double acc = 0.001;
	vector<int> user;
	string str;

	//prompt user to enter the coeifficient
	cout << "Please enter coeifficient line by line, enter blank space to terminate" << endl;

	//ask get the input from users
		while (getline(cin, str)) {
			if (str==" ") {
				break;
			}
			user.push_back(stoi(str));
		}
	

	//Output result for users input
		for (int i = 0; i < user.size(); ++i) {
			cout << user[i] << endl;
		}

	//prompt user to input x0
		double x0;
		cout << "please enter the initial value for x (x0)" << endl;
		cin >> x0;

	//Find the b coeifficient
		vector<int> b = Newtoncoefficient(user);

	//Implement loop to find the convergence for the method

		while (true) {
			double fx = Newton(user, x0);
			cout << "The f(x) is: " << fx << endl;

			double fx1 = Newton(b, x0);
			cout << "The f(x)' is: " << fx1 << endl;

			if (fx1 == 0) {
				cout << "Derivative is zero. Cannot continue." << endl;
				break;
			}

			double x11=x0- (fx / fx1);
			cout << "The new value is: " << x11 << endl;

			if (abs(x11 - x0)< acc) {
				cout << "The method has converged" << endl;
				cout << "The final value is: "<<x11 << endl;
				break;
			}

			else {
				x0 = x11;
			}
		}
	return 0;

}



