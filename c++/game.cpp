#include <iostream>
using namespace std;
int main(){
	int num = 12;
	int gnum ;
	cout<<"guess the number";
	cin>>gnum;
	while(gnum != num){
		cout<<"Wrong guess again";
		cin>>gnum;
	}
	cout<<"You win";
	return 0;
}
