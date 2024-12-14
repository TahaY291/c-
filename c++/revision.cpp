#include <iostream>
#include <cmath>
#include <string>

// Function declarations
void variablesAndTypes();
void controlStructures();
void functions();
void arraysAndStrings();
void pointersAndReferences();
void classesAndObjects();

int main() {
    // Call the functions for each topic
    variablesAndTypes();
    controlStructures();
    functions();
    arraysAndStrings();
    pointersAndReferences();
    classesAndObjects();

    return 0;
}

void variablesAndTypes() {
    // Example: Declare and initialize variables of different types
    int integerVar = 42;
    double doubleVar = 3.14;
    char charVar = 'A';
    std::string stringVar = "Hello, C++!";

    // Output variables
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Char: " << charVar << std::endl;
    std::cout << "String: " << stringVar << std::endl;
}

void controlStructures() {
    // Example: if-else statement
    int x = 10;

    if (x > 5) {
        std::cout << "x is greater than 5." << std::endl;
    } else {
        std::cout << "x is not greater than 5." << std::endl;
    }

    // Example: for loop
    for (int i = 0; i < 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Example: while loop
    int y = 0;
    while (y < 3) {
        std::cout << y << " ";
        ++y;
    }
    std::cout << std::endl;
}

void functions() {
    // Example: Function definition and call
//    int add(int a, int b) {
//        return a + b;
//    }
//
//    // Call the function
//    int result = add(3, 4);
//    std::cout << "Sum: " << result << std::endl;
//}

void arraysAndStrings() {
    // Example: Arrays
    int numbers[] = {1, 2, 3, 4, 5};

    // Output array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Example: Strings
    std::string greeting = "Hello, C++!";

    // Output string
    std::cout << greeting << std::endl;
}

void pointersAndReferences() {
    // Example: Pointers
    int value = 42;
    int *ptr = &value;

    // Output pointer value
    std::cout << "Pointer value: " << *ptr << std::endl;

    // Example: References
    int num = 7;
    int &ref = num;

    // Output reference value
    std::cout << "Reference value: " << ref << std::endl;
}

void classesAndObjects() {
    // Example: Class and Object
    class Rectangle {
    public:
        int length;
        int width;

        int calculateArea() {
            return length * width;
        }
    };

    // Create an object of the Rectangle class
    Rectangle rectangle;
    rectangle.length = 5;
    rectangle.width = 3;

    // Output calculated area
    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
}

