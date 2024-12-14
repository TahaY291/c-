#include<iostream>
using namespace std;
class person{
	int id;
	string name;
	public:
		person(int i, string n){
			id = i;
			name = n;
			 
		}
		virtual int getid(){
			return id;
		}
		virtual string getname(){
			return name;
		}
		virtual void display() = 0;
};
class child:public person{
	float marks;
	public:
		child(int i , string n , float m): person(i,n){
			marks = m;
		}
		void display(){
			cout<<"*** student Record ***";
			cout<<"\n\n Student id: "<<getid();
			cout<<"\n\n student marks: "<<marks;
		}
};
class teacher: public person{
		string qualify;
	public:
		teacher(int i , string n , string q): person(i,n){
			qualify = q;
		}
		void display(){
			cout<<"*** student Record ***";
			cout<<"\n\n Student id: "<<getid();
			cout<<"\n\n student name: "<<getname();
			cout<<"\n\n Teacher Qualification: "<<qualify;
		}
	
};
int main(){
	person *p[2];
	p[0] = new child(100, "khizar ", 2.11);
	p[1] = new teacher(1000, "Ali Raza"," MSC");
	p[0] -> display();
	p[1] -> display();
	return 0;
}
