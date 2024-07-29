#include <iostream>
using namespace std;
int main () {
    // Declare variables

    double sideLength;

    // Take input from user 
    std::cout << "Enter the side of the square : " << std::endl;
    std::cin >> sideLength;

    // Calculate and print area
    double area = sideLength * sideLength;

    // Display the result
    std::cout << "The area of the square is : "  << area << std::endl;

    return 0;
}