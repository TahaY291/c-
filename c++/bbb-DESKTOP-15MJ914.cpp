#include <iostream>
#include <string>
#include <limits> // Include the <limits> header for numeric_limits

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    static int rollNumberCounter; // Static variable to keep track of roll numbers

public:
    Student(const string& n) : name(n), rollNumber(++rollNumberCounter) {}

    void display() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

// Initialize static variable
int Student::rollNumberCounter = 0;

int main() {
    string name;
    char choice;

    do {
        cout << "Enter student name: ";
        getline(cin >> ws, name); // Read entire line including spaces

        Student student(name);
        student.display();

        cout << "Do you want to register another student? (y/n): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in input buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

