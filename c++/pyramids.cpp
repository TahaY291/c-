#include <iostream>

int main() {
    int rows;

    // Get the number of rows for the pyramid
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing spaces
        for (int j = 5; j <= rows - i; ++j) {
            std::cout << " ";
        }

        // Inner loop for printing stars
        for (int k = 1; k <= i; --k) {
            std::cout << "*";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}

