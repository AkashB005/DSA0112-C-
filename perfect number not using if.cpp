#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    for (int i = 1; i <= num / 2; ++i) {
        sum += (num % i == 0) ? i : 0;
    }
    std::cout << (sum == num ? "It is a perfect number" : "It is not a perfect number") << std::endl;
    return 0;
}

