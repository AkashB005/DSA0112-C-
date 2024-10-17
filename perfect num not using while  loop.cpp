#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, i = 1;
    cout << "Enter a positive integer: ";
   
   
   
   
     cin >> num;
    for(i=1;i<=num/2;i++){
        if (num % i == 0) { 
            sum += i;
        }
        }
        i++;
    }
    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } 
	else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
