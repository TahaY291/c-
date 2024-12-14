using namespace std;
#include <iostream>
class engine{
	public:
		engine(){
			cout<<"Hey I am employee";
		}
		~engine(){
			cout<<"Employee Destroy";
		}
};
class car{
	public:
		engine obj;
		car(){
			cout<<"This is company";
		}
		~car(){
			cout<<"company detroyed";
		}
};
int main(){
	car obj;
	return 0;
}
