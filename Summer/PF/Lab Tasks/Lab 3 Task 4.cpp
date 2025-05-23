#include<iostream>
using namespace std;
int main(){
	int a, b, c, HCF;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second umber:";
	cin>>b;
	cout<<"Enter third number:";
	cin>>c;
	
	for(int i=1; i<=10; i++){
		if(a%i==0 && b%i==0 && c%i==0){
			HCF=i;
		}
		cout<<HCF;
	}
}

