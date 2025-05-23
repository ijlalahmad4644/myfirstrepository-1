#include<iostream>
using namespace std;
int main(){
	
	double salary, tax, remsal,a,b;
cout<"enter salary";
cin>>salary;
if(salary<=10000){
	tax=salary*0.05;
	remsal=salary-tax;
	cout<<"Your salary after tax"<<remsal;
}
else if(salary>10000){
	a=(salary-10000)*0.1;
	b=10000*0.05;
	tax=a+b;
	remsal=salary-tax;
	cout<<"Your salary after tax"<<remsal;
}	
}

	
	/*
	int number, f=1, i=1;
	cout<<"Enter a number whose factorial is to be find:";
	cin>>number;
	
	while(i<=number){
		f=f*i;
		i++;
	}
	cout<<"The factorial of "<<number<<"is:"<<f;
}*/
