#include <iostream>
#include "compute.h"

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = square(n);
    std::cout << "Square: " << result << std::endl;

    result = cube(n);  // Laskee ja tulostaa kuution
    std::cout << "Cube: " << result << std::endl;

    return 0;
}