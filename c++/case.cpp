#include <iostream>

int main() {
    // Variable to be tested
    int choice = 1;

    // Get user input or set the value of 'choice' somehow

    switch (choice) {
        case 1:
            std::cout << "You chose option 1." << std::endl;
            break;

        case 2:
            std::cout << "You chose option 2." << std::endl;
            break;

        case 3:
            std::cout << "You chose option 3." << std::endl;
            break;

        // Add more cases as needed

        default:
            std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
  
