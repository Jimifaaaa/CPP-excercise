#include<iostream>
#include<cmath>

using namespace std;

int nfunction(int N) {
	if (N == 0) return 1;
	long long mult = 1;

	for (int i = 1;  i < N+1; ++i) {
		mult *= i;
	}
	return mult;
}

float exponential(int N, float x) {
	float sum = 0;
	for (int i = 0; i < N; ++i) {
		sum += pow(x, i) / nfunction(i);
	}
	return sum;
}



int main() {
	int N;
	cout << "Please enter the value for N" << endl;
	cin>>N;

	float x;
	cout << "Please enter the value for x" << endl;
	cin >> x;

	//Find n! based on N
	int mult = nfunction(N);
	cout << mult << endl;

	//Set to find the exponential
	float sume = exponential(N, x);
	cout << sume << endl;

	//define -x to find the e^-x
	float negx = -x;
	float negasume= exponential(N, negx);

	float tanhapprox = (sume - negasume) / (sume + negasume);
	float tanhreal = tanh(x);
	cout << "The computed tanh is: " << tanhapprox << endl;
	cout << "The real tanh is: " << tanhreal << endl;

}

//Try using recursive to improve efficiency
//limit the n! as it can be very big

