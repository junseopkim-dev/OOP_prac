#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int a, b;
    double c, d;

    // Get user input for integer variables
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    // Call the add function for integers
    std::cout << "The sum of integers is: " << add(a, b) << std::endl;

    // Get user input for double variables
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> c >> d;

    // Call the add function for doubles
    std::cout << "The sum of floating-point numbers is: " << add(c, d) << std::endl;

    return 0;
}
