#include<iostream>
using namespace std;

/*
void check_event(){
	int a;
	cout<<"Enter a number:";
	cin>>a;
	
	if(a%2==0){
		cout<<a<<"is an Even Number";
	}
	else{
		cout<<a<<"is an Odd Number";
	}
}

int main(){
	check_event();
}*/




/*
void print_table(){
	int num;
//	while(num!=0){
	cout<<"Enter a number:";
	cin>>num;
	
	for(int i=1; i<=10; i++){
		cout<<num<<"x"<<i<<"="<<num*i<<endl;
	}
	}

int main(){
	print_table();	
}
*/



/*
void add(int, int, int);

int main(){
	
	int num1, num2, num3;
	cout<<"Enter Numbers:";
	cin>>num1>>num2>>num3;
	
	add(num1,num2,num3);
}


void add(int a, int b, int c){
	int add;
	add=a+b+c;
	cout<<add;
	
}*/


/*
void check(int, int);
int main(){
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	check(x,y);
}

void check(int a, int b){
	if(a>b){
		cout<<a<<"is greater than"<<b;
	}
	else{
		cout<<b<<"is greater than"<<a;
	}
	
}
*/




/*
void square(int);

int main(){
//	int f;	
	int x;
//	while(x!=f){
	cout<<"Enter Number";
	cin>>x;
	square(x);
}//}


void square(int z){
	int square;
	square=z*z;
	cout<<square;
}
*/




/*
int add(int, int);

int main(){
	int a, b, sum;
	cout<<"Enter Numbers:";
	cin>>a>>b;
	sum=add(a, b);
	cout<<sum;
}

int add(int a, int b){
	int r;
	r=a+b;
	return r;
}

*/


/*
float check_greator(float, float);

int main(){
	int abc, xyz, CG;
	cout<<"Enter Numbers:\n";
	cin>>abc>>xyz;
	CG=check_greator(abc, xyz);
	cout<<CG;
	
	
}

float check_greater(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
*/


//Tasks

/*

 void add(int a, int b){
 	int sum=a+b;
 	cout<<sum;
 	cout<<endl;
 }
 
 void subtract(int a, int b)
 {
 	int minus=a-b;
 	cout<<minus;
 	cout<<endl;
 }
 
 void multifly(int a, int b)
 {
 	
 	int mul=a*b;
 	cout<<mul;
 	cout<<endl;
 }
 
 void division(int a, int b){
 	
 	int divide=a/b;
 	cout<<divide;
 	cout<<endl;
 }
 
 void square(int a)
 {
 	
 	int sqrt=a*a;
 	cout<<sqrt;
 	cout<<endl;
 }
 
 
 void rem(int a, int b){
 	
 	int rem=a%b;
 	cout<<rem;
 	cout<<endl;
 }

int main(){
	int  num1, num2;
	cout<<"Enter Number";
	cin>>num1>>num2;
	add(num1,num2);
	subtract(num1,num2);
	multifly(num1,num2);
	division(num1,num2);
	square(num1);
	rem(num1,num2);
}
*/



/*
void input(int &m1, int &m2, int &m3, int &m4, int &m5) {
    cout << "Enter bio Marks:" << endl;
    cin >> m1;
    cout << "Enter phs Marks:" << endl;
    cin >> m2;
    cout << "Enter chem Marks:" << endl;
    cin >> m3;
    cout << "Enter eng Marks:" << endl;
    cin >> m4;
    cout << "Enter math Marks:" << endl;
    cin >> m5;
}

void display_total_marks(int m1, int m2, int m3, int m4, int m5) {
    int total = 0;
    if (m1 > 49) total += m1;
    if (m2 > 49) total += m2;
    if (m3 > 49) total += m3;
    if (m4 > 49) total += m4;
    if (m5 > 49) total += m5;
    cout << "Total marks of subjects scoring above 49: " << total << endl;
}

int main() {
    int m1, m2, m3, m4, m5;
    input(m1, m2, m3, m4, m5);
    display_total_marks(m1, m2, m3, m4, m5);
    return 0;
}
*/


/*
int main(){

int a, b;
cout<<"Enter rows";
cin>>a;
cout<<"Enter colums";
cin>>b;

int arr[a][b];

for(int i=0; i<a; i++){
	for(int j=0; j<b; j++){
		cin>>arr[i][j];
	}
    }
    
    for(int i=0; i<a; i++){
	for(int j=0; j<b; j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
    }
    
    int sum=0;
    for(int i=0; i<a; i++){
    	cout<<arr[i][i];
    	sum+=arr[i][i];
	}
    cout<<sum;
}*/




/*
int main(){
	int r,c;
	cout<<"Enter No rows:";
	cin>>r;
	cout<<"enter no of columns:";
	cin>>c;
	int arr[r][c];
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
	}
}
			int smallest=arr[0][0];
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					
			if(smallest>arr[i][j]){
				smallest=arr[i][j];
			}
			
		}
	}
	
	int largest=arr[0][0];
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					
			if(largest<arr[i][j]){
				largest=arr[i][j];
			}
			
		}
	}
	cout<<"The largest value is:"<<largest;
	cout<<"The samllest value is:"<<smallest;
}
	*/
	
