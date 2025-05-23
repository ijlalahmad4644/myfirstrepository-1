

#include<iostream>
using namespace std;
int main(){
	
int totalbalance=0;
int press;
cout<<"Press 1 to create Account:"<<endl;
cout<<"Press 2 to check Account balance:"<<endl;
cout<<"Press 3 to deposit money:"<<endl;
cout<<"Press 4 to withdraw money:"<<endl;
cout<<"Press 5 to transfer money:"<<endl;
cin>>press;


    while(press!=0){
	 
    if(press==1){
    	
	int cnic,phone,dob ;
	string name, add;
		
	cout<<"Enter details to create account"<<endl;
	
		cout<<"Enter Your name:"<<endl;
		cin>>name;
		cout<<"Enter Your cnic:"<<endl;
		cin>>cnic;
		cout<<"Enter your date of birth:";
		cin>>dob;
		cout<<"Enter Your phone no:"<<endl;
		cin>>phone;
		cout<<"Enter Your address:"<<endl;
		cin>>add;
        }
        
		else if(press==2){
		cout<<"Your Account Balance is:";
		cout<<totalbalance;
		}
	
	    else if(press==3){
	    	int dep;
	    	cout<<"Enter amount to deposit:";
	    	cin>>dep;
	    	totalbalance+=dep;
	   	}
		
		else if(press==4){
			int with;
	    	cout<<"Enter amount to withdraw:";
	    	cin>>with;
	    	totalbalance-=with;
	   	}
		
		else if(press==5){
			int tran;
			cout<<"Enter amount to transfer:";
			cin>>tran;
		}
	
}}

/*switch(press){
	case 1:
		int cnic,phone,dob;
		char name, add;
		
		cout<<"Enter details to create account:"<<endl;
		
		cout<<"Enter Your name:"<<endl;
		cin>>name;
		cout<<"Enter Your cnic:"<<endl;
		cin>>cnic;
		cout<<"Enter Your phone no:"<<endl;
		cin>>phone;
		cout<<"Enter Your address:"<<endl;
		cin>>add;
	
	case 2:
		cout<<"Your Account Balance is:";
		cout<<totalbalance;
	
	case 3:
		cout<<"Enter amount to Deposit:";
	
	case 4:
		cout<<"Enter amount to withdraw:";
		
	case 5:
		cout<<"Enter amount to Transfer:";				
}*/



