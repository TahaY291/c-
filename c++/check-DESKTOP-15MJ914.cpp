#include<iostream>
using namespace std;
class Person{ 
protected: 
 int age; 
public: 
 bool SetAge(int _age){ 
 if (_age >=0 && _age <= 125) { 
 age = _age; 
 return true; 
 } 
 return false; 
 } 
}; 
class Adult : private Person { 
 public: 
 bool SetAge(int _age){ 
 if (_age >=18 && _age <= 125) { 
 age = _age; 
 return true; 
 } 
 return false; 
 } 
};
int main(){
	Adult d;
	d.SetAge(23);
	d.SetAge(18);
	return 0;
}
