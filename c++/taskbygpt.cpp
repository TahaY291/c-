#include<iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "Enter 1 to calculate area of rectangle" << endl;
    cout << "Enter 2 to calculate speed of car" << endl;
    cout << "Enter 3 to calculate electricity bill" << endl;
    cin >> choice;

    switch(choice) {
        case 1: {
            int length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "The area of the rectangle is: " << (length * width) << endl;
            break;
        }
        case 2: {
            int distance, time;
            cout << "Enter distance: ";
            cin >> distance;
            cout << "Enter time: ";
            cin >> time;
            cout << "The speed of the car is: " << (distance / time) << endl;
            break;
        }
        case 3: {
            int power, rate;
            cout << "Enter power consumption: ";
            cin >> power;
            cout << "Enter rate: ";
            cin >> rate;
            cout << "The electricity bill is: " << (power * rate) << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}

