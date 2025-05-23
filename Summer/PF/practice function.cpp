#include<iostream>
using namespace std;  
/*
void print_table(){
	int num,s,e;
	cout<<"Enter a number:";
	cin>>num;
	cin>>s>>e;
	
	for(int i=s; i<=e; i++){
		cout<<num<<"x"<<i<<"="<<num*i<<endl;
	}
}

int main(){
	print_table();
}*/


/*

void add(int, int, int);

main(){
int a,b,c;
cin>>a>>b>>c;
add(a,b,c);
}

void add(int f, int g, int h){

int d;
d=f+g+h;
cout<<d;
}
*/




/*
void check_greator(float, float);
main(){
int l, m;
cin>>l>>m;
check_greator(l,m);
}

void check_greator(float p, float q){
if(p>q){
cout<<p<<"is greator than"<<q;
}
else{
cout<<q<<"is greator than"<<p;
}
}*/


/*
void print_square(int);
int main(){
int s;
cin>>s;
print_square(s);
}

void print_square(int z){
z=z*z;
cout<<z;
}
*/

void print_last_digit(int);

int main(){
int a,c;
cin>>a;
print_last_digit(a);
}

void print_last_digit(int a){
int c;
c=a/10;
cout<<"The last digit of"<<a<<"is:"<<c;

}

