//#include <iostream>
//using namespace std;
//int main(){
////	int a = 2;
//	int b = 4;
//	int a = &b;
//	cout<<a;
//}
#include <iostream>
using namespace std;

int main() {
    // int a = 2;  // Remove this line
    int b = 4;
    int *a = &b;  // Declare 'a' as a pointer and assign the address of 'b' to it
    *a = 8;
	cout << b;
    
    return 0;
}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int b = 4;
//    int *a = &b;  // Declare 'a' as a pointer and assign the address of 'b' to it
//
//    // Store a value through the pointer
//    *a = 7;
//
//    // Print the updated value of 'b'
//    cout << "Value of b: " << b << endl;
//
//    return 0;
//}

