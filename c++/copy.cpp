#include<iostream>
using namespace std;
class base{
	int a;
	public:
		base(int n){
			a = n;
			cout<<"A is :"<<a;
		}
		
};
class derived : public base{
	int b;
	public:
		derived(int x, int y): base(x) , b(y){
		cout<<"B is :"<<b;
		}

}; 
int main(){
	derived d(12,34);
	return 0;
}
