#include <iostream>
using namespace std;

class MyClass {
  string name; // The class
public:        // Access specifier
  MyClass(string username) : name(username) { 
  cout<<"The name is"<<name;
  }
};

int main() {
  MyClass myObj("Taha"); // Create an object of MyClass (this will call the constructor)
  return 0;
}

