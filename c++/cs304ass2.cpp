#include<iostream>
using namespace std;
 class base{
 	public:
 		virtual void display(string)=0;
 };
 class child1: public base{
 	public:
 		void display(string name){
 			cout<<"---------\n";
 			cout<<"My name is:"<<name<<endl;
		 }
 };
 class child2:public base{
 	public:
 		void display(string course){
 			 			cout<<"---------\n";
 			cout<<"My course is:"<<course<<endl;
 			cout<<"______________\n";
		 }
 };
 void showid(int* id, int n){
 	if(n>0){
 		cout<<"My VUID id: "<<id[0];
 		for(int i = 1; i<n; ++i){
 			cout<<", "<<id[i];
		 }
	 }
	 cout<<endl<<"_______\n"<<endl;
 }
 void sumlast3digits(int *id, int n){
 	if(n<0){
 		cout<<"Cannot calculate the sum of the last three digits.\n";
 		return;
	 }
	 int sum = 0;
	 for(int i=n-3;i<n; ++i){
	 	sum += id[i];
	 }
	 cout<<endl;
	 cout<<"Sum of the last three digits of my vu id is: "<<sum<<endl;
 }
 int main(){
 	int id[] = {2,2,0,4,0,7,2,9,9};
 	int n = sizeof(id)/sizeof(id[0]);
 	base* p;
 	child1 d1;
 	child2 d2;
 	string s1 = "Taha yasin";
 	p=&d2;
 	p->display(s1);
 	string s2 = "CS304";
 	p=&d2;
 	p->display(s2);
 	showid(id,n);
 	sumlast3digits(id,n);
 	return 0;
 	
 }
