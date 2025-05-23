#include<iostream>
using namespace std;
int main(){
int n=10;
int count=0;
int guess;
cout<<"Enter a number between 1 & 20\n";
cin>>guess;

do{

if(guess==n)
{
cout<<"You guess the right number";
break;
   }
   
else if(guess<n)
{
cout<<"too low ";
count++;
cout<<3-count<<" attempts left";
if(count<3){
cin>>guess;}
}

else if(guess>n)
{
cout<<"too high ";
count++;
    cout<<3-count<<" attempts left";
    if(count<3){
cin>>guess;  }
}
   }

while(count<3);
}












	
	
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
