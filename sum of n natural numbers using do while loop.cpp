#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    int i=1;
    cout << "Enter a positive integer: ";
    cin >> n;
    do{
        sum += i;
        i++;
	}
	while(i<=n);
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
