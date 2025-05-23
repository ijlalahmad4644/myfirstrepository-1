#include<iostream>
using namespace std;
int main(){
	
double salary, tax, remsal,a,b;
cout<<"enter salary";
cin>>salary;
if(salary<=10000){
	tax=salary*0.05;
	remsal=salary-tax;
	cout<<remsal;
}
else if(salary>10000){
	a=(salary-10000)*0.1;
	b=10000*0.05;
	tax=a+b;
	remsal=salary-tax;
	cout<<remsal;
}	
}



/*	int unit, bill, a, b, c, d;
	cout<<"Enter Units:";
	cin>>unit;
	
	if(unit<=100){
		bill=unit*5;
		cout<<bill;
	}
	else if(unit>100 && unit<=200){
		a=unit-200;
		b=a*10;
		c=100*5;
		bill=b+c;
		cout<<bill;
	}
	
	else{
		a=unit-200;
		b=a*15;
		c=100*5;
		d=100*10;
		bill=b+c+d;
		cout<<bill;
	}}*/
	
	
//	LAB 03
/*	int a;
	cin>>a;
	switch(a%2){
		case 0:
			cout<<"Number is even";
			break;
		
		case 1: 
		cout<<"Number is odd";
		break;	
	}}
	*/
	
	
	
	
/*	
	
int num, sum=0;
cout<<"enter a number";
cin>>num;

while(num!=-1){	
sum=sum+num;
cin>>num;
}
cout<<sum;
}
*/



/*
int num, fact=1;
cout<<"Enter a number";
cin>>num; 
for(int i=1; i<=num; i++){
	
fact=fact*i;
}
cout<<"Factorial of "<<num<<" is:"<<fact;
}
*/



/*
int num, a=1;
cout<<"Enter a number";
cin>>num;

while(a<=10){
cout<<num<<"*"<<a<<"="<<num*a<<endl;
	a+=1;
}}
*/


/*
int a, b, c;
cin>>a>>b>>c;
for(int i=1; i<=a*b*c; i++){
if(i%a==0 && i%b==0 && i%c==0){
cout<<i<<endl;
break;
}
}
}*/



/*
int z;
for(z=1; z<=10; z++){
cout<<z*z-1;
}
}*/




/*
int n, count;
cin>>n;
int a;
for(a=1; a<=n; a++){
if(n%a==0){
cout<<a;
}
}
}
*/

	
	
	
	
	
	
	
	
	
	
	
	// LAB 04
	
		/*
	int a=1;
	while(a<=3){
		int b=1;
		while(b<=3){
			cout<<"ijlal\n";
			b=b+1;
		}
		a=a+1;
	}
}*/



/*
int i=10;
while(i>=5){
	int j=5;
	while(j<=10){
		cout<<"Hello\n";
		j=j+1;
	}
	i=i-1;
}}*/



/*
int i=1;
while(i<=5){
	int j=1;
	while(j<=5){
		cout<<"i="<<i<<" j="<<j<<endl;
		j=j+1;
	}
	i=i+1;
}}
*/



/*
int a,b;
for(a=1; a<=5; a++){
for(b=1; b<=5; b++){
cout<<"a="<<a<<" b="<<b<<endl;
}

}}*/



/*
int a, b;
for(a=1; a<=3; a++){
for(b=1; b<=5; b++){
if(a==1 || a==3 || b==1 ||b==5){
cout<<"1";
}
else{
cout<<" ";
}}}}
*/



/*
int a, b, j;

for(a=1; a<=5; a++){

for(b=1; b<=a; b++){

    cout<<"#";
   }  
    for(j=a; j<=5; j++){
    cout<<"*";
}
cout<<endl;
}
}
*/



/*
for(int i=1; i<=5; i++){
	for(int j=i; j<=5; j++){
		cout<<"*";
	}
	cout<<endl;
}}*/




/*
for(int a=1; a<=5; a++){

for(int b=a; b<=5; b++){

    cout<<" ";
   }  

    for(int j=2; j<=a*2; j++){
    cout<<"*";
}
cout<<endl;
}
}
*/




