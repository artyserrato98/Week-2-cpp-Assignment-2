#include <iostream>

using namespace std;

int main() {
    int number;

    std::cout << "Enter Number: ";
    std::cin >> number;

    std::cout << "Here are the following multiples of " << number << " are: \n";

    for (int i = 1; i <= 10; i++) {
        std::cout << number * i;
        if (i < 10) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    return 0;
}

