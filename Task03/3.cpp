#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int c;
    int factorial;
    for (int i = 1; i <= 9 * n; i++) {
        factorial *= i;
    }

    c = factorial / (pow(factorial / (n * n), 2));

    std::cout << c << std::endl;

    return 0;
}

