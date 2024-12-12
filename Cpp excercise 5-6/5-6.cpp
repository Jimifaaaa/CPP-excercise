#include<cmath>;
#include<fstream>;
#include<iostream>;

using namespace std;


int main() {
	const double pi = 3.14159;
	const int n = 100;
	double s;

	//Functions to create the file
	ofstream f_out("sine.txt");

    if (f_out.good()) {
        for (int i = 0; i < n; ++i) {
            s = sin(2 * pi*i / 100);

            cout.precision(5);
            cout.width(10);
            cout.precision(5);
            cout.width(15);
            cout << s << endl;

            // Write to file
            f_out.precision(5);
            f_out.width(10);
            f_out.precision(5);
            f_out.width(15);
            f_out << s << endl;
        }
        f_out.close();
	}
    else {
        cout << "Problem with output to files" << endl;
    }
    return 0;
}