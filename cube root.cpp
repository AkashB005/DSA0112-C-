#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num, result;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0) {
        
		  result = cbrt(num); 
        cout << "The cube root of " << num << " is " << result << endl;
    } else {
        result = cbrt(num);
        cout << "The cube root of " << num << " is " << result << endl;
    }
    return 0;
}
