#include<iostream>
using namespace std;
int main(){
	int unit, bill, a, b, c, d, e;
	cout<<"enter No of units:";
	cin>>unit;
	
	if(unit<=100){
		bill=unit*5;
		cout<<"your bill is:"<<bill;
	}
	
	else if(unit>100 && unit<=200){
		a=unit-100;
		a=a*10;
		b=100*5;
		cout<<"Your bill is:"<<a+b;
		
	}
	else{
		c=unit-200;
		c=c*15;
		d=100*10;
		e=100*5;
		cout<<"Your bill is:"<<c+d+e;
	}}
