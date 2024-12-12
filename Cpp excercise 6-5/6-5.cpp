#include<iostream>;

using namespace std;

int fibnacci(int n) {
    // This is the stopping condition (i.e. the value of n for which the result
// is predefined)
// Remember the operands to the || operator are booleans, so we cannot write
// (n == 0 || 1). C++ would intepret any value of n != 0 as 'true' so the
// function would then always return 1.
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        // Perform recursion by calling itself
        return fibnacci(n - 1) + fibnacci(n - 2);
    }
}

int main() {
    unsigned int n = 15;
        for (int i = 0; i < n; ++i) {
            cout << fibnacci(i) << endl;
        }
        return 0;
}
