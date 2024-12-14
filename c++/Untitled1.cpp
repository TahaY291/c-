#include<iostream>
using namespace std;

class Node{
	public:
	int val;
	Node* next;
	Node(int data){
		val=data;
		next=NULL;
		
	}

};
	void insertathead(Node* &head,int val){
		Node* n=new Node(val);
		n->next=head;
		head=n;
	}
	void insertattail(Node* &head,int val){
		Node* n=new Node(val);
		Node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
	void display(Node* head){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->val<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
int main(){
	Node* head=NULL;
	insertathead (head,2);
	display(head);
	insertathead(head,1);
	display(head);
	insertattail(head,3);
	display(head);
	
}
