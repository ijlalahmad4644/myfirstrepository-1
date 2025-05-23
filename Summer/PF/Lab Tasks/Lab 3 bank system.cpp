#include<iostream>
using namespace std;
int main(){
	int press, deposit, withdraw, amount,pin;
	
	cout<<"Enter Pin:";
	cin>>pin;
	while(pin==1234){
	
	
    while(press!=4)
	{
    cout<<"press 1 to deposit"<<endl;
	cout<<"press 2 to withdraw"<<endl;
	cout<<"press 3 to check balance"<<endl;
	cout<<"press 4 to exit"<<endl;
    cin>>press;
    
    	if(press==1){
    		cout<<"Deposit Money:";
    		cin>>deposit;
    		cout<<endl;
    		amount=amount+deposit;
    
		}
		
		else if(press==2){
		    
			cout<<"Withdraw Money:"<<endl;
			cin>>withdraw;
			cout<<endl;
			amount=amount-withdraw;
	
	    }
	
	
		else if(press==3){
			cout<<"Your balance is:"<<amount<<endl<<endl;
		}
		
		
		else{
			cout<<"exited";
		}
	}	
	}
    }
    	
    
    
	


/*
int press, deposit, withdraw, amount;
	
    while(press!=4)
	{
    cout<<"press 1 to deposit"<<endl;
	cout<<"press 2 to withdraw"<<endl;
	cout<<"press 3 to check balance"<<endl;
	cout<<"press 4 to exit"<<endl;
    cin>>press;
    
    switch(press){
    	case 1:
    		cout<<"Enter amount to deposit:";
    		cin>>deposit;
    		amount=amount+deposit;
    		break;
    	
		case 2:
		    cout<<"Enter amount to withdraw:";
			cin>>withdraw;
			amount=amount-withdraw;
			break;
			
		case 3:
		    cout<<"Your balance is:"<<amount<<endl;	
		    break;
		    
		case 4:
		    cout<<"Exited";
		    break;
			
	    default: 
		    cout<<"Invalid";
			break; 
				
	}}}*/
	


/*	
	int s1,s2,s3,s4,s5, per, total=500, gradecat;
	cout<<"Enter Physics Marks";
	cin>>s1;
	cout<<"Enter chemistry Marks";
	cin>>s2;
	cout<<"Enter biology Marks";
	cin>>s3;
	cout<<"Enter maths Marks";
	cin>>s4;
	cout<<"Enter computer Marks";
	cin>>s5;
	
	per=((s1+s1+s3+s4+s5)*100)/total;
	cout<<"Percentage:"<<per;
	 gradecat=per/10;
	 
	 switch(gradecat){
	 	case 10:
	 	case 9:
		 cout<<"Grade A";
		 break;	
		 
		 
	 	case 8:
		 cout<<"Grade B";
		 break;	
		 
		 
	 	case 7:
		 cout<<"Grade C";
		 break;	
		 
		 
	 	case 6:
		 cout<<"Grade D";
		 break;	
		 
		 
	 	case 5:
		 cout<<"Grade E";
		 break;	
		 
		default:
		cout<<"F"; 
	 }}
*/


/*
int a=10;
while(a<=100){
	cout<<"ijlal ahmad"<<endl;
	a+=10;
}}*/



/*
int a=1;
while(a<=1024){
	cout<<a<<endl;
	a*=2;
}}*/


/*
int count=0;
int a;
cin>>a;
while(a!=0){
	count=count+1;
	a=a/10;
}
cout<<count;
}
	*/
	
	
/*	
	int a;
	cin>>a;
	while(a<1 || a>10){
		cout<<"enter again";
		cin>>a;
	}
	cout<<"You enter"<<a;
}
*/

/*
int num, a=1;
cin>>num;
while(a<=num){
	if(num%a==0){
		cout<<a<<endl;
	}
	a=a+1;
}
}*/



/*
int num, a=1;
cout<<"Enter a number";
cin>>num;

while(a<=10){
cout<<num<<"*"<<a<<"="<<num*a<<endl;
	a+=1;
}}*/

	
	
