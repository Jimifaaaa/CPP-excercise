#include<iostream>;
#include<vector>;
using namespace std;

void insert(float a[], int p,float val) {
	//read all values and Compares a[i] with the preceding elements
	while (p > 0 && val < a[p - 1]) {
		//Shifts those elements to the right if they are larger than a[i]
        a[p] = a[p - 1];
		p--;
	}
	//insert input val into the correct
	a[p] = val;
}

void insertionSort(float a[], int length) {
	for (int i = 0; i < length; i++) {
		insert(a, i, a[i]);
	}
}

int main() {
    const int n = 20;
    const int range = 100;

    float a[n];

    // Seed random number generator.
    srand(time(0));

    // Generate and print random numbers
    cout << "Generated random numbers: " << endl;
    for (int i = 0; i < n; i++) {
        a[i] = float(rand()) / RAND_MAX * range;
        cout << a[i] << endl;
    }
    cout << endl;

    // Sort array
    insertionSort(a, n);

    // Print sorted array
    cout << "Sorted random numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
