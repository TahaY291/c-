#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data =val;
			next=NULL;
		}		
};
void insertattail(node* &head, int val){
	node* n= new node(val);
	node* temp =head;
		if(head==NULL){
		head=n;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"NULL";
}
int main(){
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	return 0;
}
