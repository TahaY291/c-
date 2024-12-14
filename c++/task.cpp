#include<iostream>
using namespace std;

int main() {
    int distance, time, length, width, power, rate;
    int n;

    cout << "Enter 1 to calculate speed" << endl;
    cout << "Enter 2 to calculate area" << endl;
    cout << "Enter 3 to calculate electric bill" << endl;
    cin >> n;

    switch(n) {
        case 1:
            cout << "Enter distance: ";
            cin >> distance;
            cout << "Enter time: ";
            cin >> time;
            cout << "The speed of car is " << (distance / time)<<"m/s" << endl;
            break;
        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "The area of rectangle is " << (length * width)<<" cm" << endl;
            break;
        case 3:
            cout << "Enter power consumption: ";
            cin >> power;
            cout << "Enter rate: ";
            cin >> rate;
            cout << "The electric bill is " << (power * rate) << " units"<< endl;
            break;
        default:
            cout << "Wrong request" << endl;
            break;
    }

    return 0;
}

