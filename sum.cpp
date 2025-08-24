#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0) {
        return 0;  // Base case
    }
    return n + f(n - 1);  // Recursive case
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Sum = " << f(n);
    return 0;
}
