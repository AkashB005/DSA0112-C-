#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10;       // Remove the last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}

