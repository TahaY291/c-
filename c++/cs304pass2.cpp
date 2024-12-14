#include<iostream>
using namespace std;

class bankaccount{
	int accountnumber;
	string accountholdername;
	double balance;
	public:
		bankaccount(){
			accountnumber = 0;
			accountholdername = "";
			balance = 0;
			
		}
		bankaccount(int accnum, string accname, double b){
			accountnumber = accnum;
			accountholdername = accname;
			balance = b;
			
		}
		virtual void displayaccountinfo(){
			cout<<"Account number: "<<accountnumber<<endl;
			cout<<"Account Holder: "<<accountholdername<<endl;
			cout<<"Balance: RS"<<balance<<endl;
		}
};
class savingaccount:public bankaccount{
	double interestrate;
	public:
		savingaccount(){
			interestrate = 0.0;
			
		}
		savingaccount(int accnum, string accname, double balance, double ir):bankaccount(accnum,accname,balance){
			interestrate = ir;
		}
		void displayaccountinfo(){
			cout<<"Saving Account Informatio: \n";
			bankaccount::displayaccountinfo();
			cout<<"Interest rate: "<<interestrate<<"%"<<endl;
			cout<<"_____________\n"<<endl;
		}
};
class creditcardaccount:public bankaccount{
	double creditlimits;
	public:
		creditcardaccount(){
			creditlimits = 0.0;
		}
		creditcardaccount(int accnum, string accname,double balance, double cl):bankaccount(accnum, accname, balance){
			creditlimits = cl;
		}
		void displayaccountinfo(){
			cout<<"credit Card Information: \n";
			bankaccount::displayaccountinfo();
			cout<<"credit Limits: RS "<<creditlimits<<endl;
		}
};
int main(){
	savingaccount sa(220407299, "Taha Yasin", 12000, 2.5);
	sa.displayaccountinfo();
	creditcardaccount cca(220407299, "Taha Yasin", 1300, 3000);
	cca.displayaccountinfo();
	return 0;
}
