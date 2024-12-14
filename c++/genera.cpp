#include<iostream>
using namespace std;
template<float t1,float t2>
class myclass{
	float a,b;
	public:
		myclass(float num1,float num2){
			a = num1;
			b = num2;
		}
		void sum()
		{
			cout<<"sum is a+b"<<a+b;
		}
};
int main(){
	myclass<10.2,30.1> obj(10.2,30.1);
	obj.sum();
	return 0;
	
}
