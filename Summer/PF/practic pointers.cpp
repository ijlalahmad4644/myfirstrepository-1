#include<iostream>
using namespace  std;
int main(){
/*	
	double a=10.5;
	cout<<&a<<endl;
	double *b=&a;
	cout<<b<<endl;
	cout<<&b<<endl;
	cout<<*b;
}*/



/*
     int a=100;
	cout<<&a<<endl;
	int *b;
	b=&a;
	cout<<b<<endl;
	cout<<&b<<endl;
	cout<<*b<<endl;
	
	int **c;
	c=&b;
	cout<<c<<endl;
	cout<<&c<<endl;
	cout<<*c<<endl;
	cout<<**c;
}*/


/*
int a[5];
int *b=a;
*b=7;
b++;
*b=8;
b++;
*b=16;
b++;
*b=79;
b++;
*b=167;
for(int i=0; i<5; i++ ){
	cout<<a[i]<<endl;
}
}

*/



int a[5];
int *b=&a[4];
*b=7;
b--;
*b=8;
b--;
*b=16;
b--;
*b=79;
b--;
*b=167;
for(int i=0; i<5; i++ ){
	cout<<a[i]<<endl;
}
}
