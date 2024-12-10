#include <iostream>
#include "compute.h"

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = square(n);
    std::cout << "Square: " << result << std::endl;

    // Lisää myöhemmin: Cube-tulostus
    // result = cube(n);
    // std::cout << "Cube: " << result << std::endl;

    return 0;
}