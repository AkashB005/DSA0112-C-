#include <iostream>
class CubeCalculator {
public:
    CubeCalculator(int n) : number(n) {}

    void displayCubes() const {
        for (int i = 1; i <= number; ++i) {
            std::cout << "Number is: " << i << " and its cube is: " << i * i * i << std::endl;
        }
    }

    ~CubeCalculator() {
    }

private:
    int number;
};

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    CubeCalculator calculator(n);
    calculator.displayCubes();
    return 0;
}

