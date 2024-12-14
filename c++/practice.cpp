using namespace std;
#include <iostream>
int main(){
	int i=1,u=1,sum=0;
	for (int i = 1; i<=500;i++){
		int sum = 0;
		for(int u = 1;u<i;u++){
			if(i%u ==0){
				sum=sum+u;
			}
		}
		if (sum==i){
			cout<<i<<"\n";
			
		}
		
	}
}
