#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAXSTACKSIZE 50

template <class T>
class Stack {
private:
    int top;
    T* nodes;

public:
    Stack();
    ~Stack();
    int empty(void);
    int push(T& x);
    T pop(void);
};

template <class T>
Stack<T>::Stack() {
    top = -1;
    nodes = new T[MAXSTACKSIZE];
}

template <class T>
Stack<T>::~Stack() {
    delete[] nodes; // Use delete[] for array deletion
}

template <class T>
int Stack<T>::empty(void) {
    return top < 0;
}

template <class T>
int Stack<T>::push(T& x) {
    if (top < MAXSTACKSIZE) {
        nodes[++top] = x;
        return 1;
    }
    cout << "stack overflow in push.\n";
    return 0;
}

template <class T>
T Stack<T>::pop(void) {
    T x = T(); // Initialize x to a default value
    if (!empty()) {
        x = nodes[top--];
        return x;
    }
    cout << "stack underflow in pop.\n";
    return x;
}

int main(int argc, char* argv[]) {
    Stack<int> intstack;
    Stack<char> charstack;

    int x = 10, y = 20;
    char c = 'C', d = 'D';

    intstack.push(x);
    intstack.push(y);
    cout << "intstack: " << intstack.pop() << ", " << intstack.pop() << "\n";

    charstack.push(c);
    charstack.push(d);
    cout << "charstack: " << charstack.pop() << ", " << charstack.pop() << "\n";
}

