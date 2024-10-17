#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    double num, result;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0) {
        result = sqrt(num);
        cout << "The square root of " << num << " is " << result;
    } else {
        cout << "Square root of negative number is not real.";
    }
    return 0;
}

