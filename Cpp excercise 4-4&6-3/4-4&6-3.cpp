#include<fstream>;
#include<iostream>;
using namespace std;

int main() {
	//To define the values BY USER
	
	const long long E = 210e9;

	cout << "Please enter value for I:" << endl;
	double I;
	cin >> I;

	cout << "Please enter value for F:" << endl;
	int F;
	cin >> F;

	cout << "Please enter value for L:" << endl;
	int L;
	cin >> L;

	double yx;
	int vlength;
	vlength = L / 0.01;
	
	//Create files
	ofstream f_out1("xaxis.txt");
	ofstream f_out2("yaxis.txt");
	
	if (f_out1.good() && f_out2.good()) {
		for (int i = 0; i <= vlength; ++i) {
			yx = F / (6 * E * I) * (i * i * i - 3 * L * i * i);
			cout.precision(5);
			cout << yx << endl;

			f_out1.precision(5);
			f_out1.width(10);
			f_out1 << i << endl;

			f_out2.precision(5);
			f_out2.width(10);
			f_out2 << yx << endl;
		}
	}
	else {
		cout << "Problem with file" << endl;
	}
	return 0;
}