#include <iostream>;
#include <iomanip>
#include <vector>;
#include<cstdlib>;

using namespace std;
const int SIZE = 4;
const int RANGE = 6;

void multimatrix(int A[][SIZE], int B[][SIZE], int C[][SIZE]) {
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			for (int k = 0; k < SIZE; ++k) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void printmatrix(int A[][SIZE]) {
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			//cout function in desired format
			cout << setw(4) << A[i][j] << "  ";
		}

		cout << endl;
	} 
}

int main() {
	//define the matrix
	int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

	//Seed the random time generator to current time
	srand(time(0));

	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			//rand() can generate pseudo-random int in the given range
			A[i][j] = rand() % RANGE;
			B[i][j] = rand() % RANGE;
			C[i][j] = 0;
		}
	}
	cout << "Matrix A: " << endl;
	printmatrix(A);
	cout << "Matrix B: " << endl;
	printmatrix(B);

	//Run the multi matrix function
	multimatrix(A,B,C);
	cout << "Matrix C: " << endl;
	printmatrix(C);
}
