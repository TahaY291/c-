#include <iostream>
#include <string>

class Student {
public:
    std::string name;

    Student(const std::string& n) : name(n) {}
};

class Course {
public:
    Student* students; // Aggregation: Course "has-a" Student (but not exclusively)

    Course(Student* s) : students(s) {}

    void displayStudents() {
        for (int i = 0; i < 3; ++i) {
            std::cout << "Student " << i + 1 << ": " << students[i].name << std::endl;
        }
    }
};

int main() {
    Student studentsArray[] = {Student("Alice"), Student("Bob"), Student("Charlie")};
    Course myCourse(studentsArray);
    myCourse.displayStudents();

    return 0;
}

