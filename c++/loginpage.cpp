#include <iostream>

using namespace std;
int main(){
	int userinput, cnic, number  ;
	string email, username, caste, name, fName, address, occupation;
	string password, passwords;
	cout<<"Welcome to Bank"<<endl;
	cout<<"Login 'Press A'"<<endl;
	cout<<"Sign in 'Press B' "<<endl;
	cin>>userinput;
	if(userinput == 'A'){
		cout<<"Enter Email or phone"<<endl;
		cin>>email;
		if(email.length() >= 12){
			cout<<"Enter Password ";
			cout<<"Password should greater than 7 numbers"<<endl;
			cin>>password;
			if(password.length() >= 7){
				cout<<"Complete your Password"<<endl;
			}
		}
	}else if(userinput == 'B'){
		cout<<"Create Account"<<endl;
		cout<<"Enter Name"<<endl;
		cin>>name;
		cout<<"Enter Father Name"<<endl;
		cin>>fName;
		cout<<"Enter CNIC"<<endl;
		cin>>cnic;
		cout<<"Enter Phone Number"<<endl;
		cin>>number;
		cout<<"Enter your Address"<<endl;
		cin>>address;
		cout<<"What is your Occupation"<<endl;
		cin>>occupation;
		cout<<"Caste"<<endl;
		cin>>caste;
		cout<<"Create a strong password greater than 7 number"<<endl;
		cin>>passwords;
		while(passwords.length() < 7){
			cout<<"Password should be greater than 7 number"<<endl;
			cin>>passwords;
		}
		cout<<"Create user name"<<endl;
		cin>>username;
		if(username.length() > 8){
			cout<<"Account created succesfuly"<<endl;
		}else{
			cout<<"Wrong input"<<endl;
		}
		cout<<"Account created succesfuly"<<endl;
		 cout << "Press Enter to exit...";
        cin.ignore();
		
		
		
	}
	
	
}
