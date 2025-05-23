#include <iostream> 
using namespace std; 

int main() {

int a, b;
for(a=1; a<=5; a++){

for(b=1; b<=a; b++){

    cout<<"1";
}

    cout<<endl;
}}

/*	
	int a, b;
for(a=1; a<=5; a++){

for(b=a; b<=5; b++){

    cout<<"1";
}

    cout<<endl;
}}
*/



/*	
	int a, b, j;

for(a=1; a<=5; a++){

for(b=a; b<=5; b++){

    cout<<" ";
   }  

    for(j=1; j<=a*2; j++){
    cout<<"*";
}
cout<<endl;
}
}
*/	
	
	

/*int a, b, j;

for(a=1; a<=5; a++){

for(b=a; b<=5; b++){

    cout<<" ";
   }  

    for(j=1; j<=2*a-1; j++){
    cout<<"*";
}
cout<<endl;
}
*/



/*
int a,b,j;

for(a=1; a<=5; a++){

for(b=a; b<=5; b++){

    cout<<" ";
   }  

    for(j=1; j<=a*2-1; j++){
    cout<<"*";
}

cout<<endl;

}
for(a=5; a>=1; a--){

for(b=a; b<=5; b++){

    cout<<" ";
   }  

    for(j=1; j<=a*2-1; j++){
    cout<<"*";
}
cout<<endl;

}
}
*/


/*
    int i, j, r; 

    
    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
    cin >> r; 

    
    for (i = 0; i <= r; i++) 
    {
        for (j = 1; j <= r - i; j++) 
        {
            cout << " "; 
        }

        for (j = 1; j <= 2 * i - 1; j++) 
        {
            cout << "*"; 
        }

        cout << endl; 
    }

    
    for (i = r - 1; i >= 1; i--) /
    {
        for (j = 1; j <= r - i; j++) 
        {
            cout << " "; 
        }

        for (j = 1; j <= 2 * i - 1; j++) 
        {
            cout << "*"; 
        }

        cout << endl; /
    }
}
	*/
	
	
	
	
	/*
	int r, c;
	cout<<"Enter no of rows and column:";
	cin>>r>>c;
	int arr[r][c];
	for(int i=0; i<r; i++ ){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
		}
	}
	
	
	
	for(int i=0; i<r; i++ ){
		for(int j=0; j<c; j++){
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
			int n;
			cout<<"Enter a number to search for:";
			cin>>n;
			for(int i=0; i<r; i++ ){
		    for(int j=0; j<c; j++){
		    
			if(arr[i][j]==n){
				cout<<"number found: ";
			}
			else{
				cout<<"number not found";
			}
		}
	}}
*/	
	
	
	
	
//	int a, b, j;
//
//for(a=1; a<=5; a++){
//for(b=a; b<=5; b++){
//cout<<" ";
//   }  
//
//    for(j=1; j<=a*2-1; j++){
//    cout<<"*";
//}
//cout<<endl;
//for(a=5; a>=1; a--){
//
//for(b=a; b<=5; b++){
//
//    cout<<" ";
//   }  
//
//    for(j=1; j<=a*2-1; j++){
//    cout<<"*";
//}
//cout<<endl;
//
//}
//}}

	
	
	
	
//int a, b;
//for(a=1; a<=5; a++){
//for(b=1; b<=5; b++){
//if(a==b){
//cout<<"1";
//}
//else{
//cout<<"0";
//}
//}
//cout<<endl;
//}}

/*	
	int i, j;
for(i=1; i<=5; i++){
for(j=1; j<=5; j++){
if(i%2==0){
cout<<"1";
}
else{
cout<<"0";
}
}
cout<<endl;
}}
*/



/*
int a, b;
for(a=1; a<=5; a++){
for(b=1; b<=5; b++){
cout<<"#";
}
cout<<endl;
}}
*/



/*
int last_digit(int);
void display_table(int);

main(){
int a,b;
cin>>a;
b=last_digit(a);
display_table(b);
}

int last_digit(int s){
int l;
l=s%10;
return l;
}

void display_table(int f){
int i;
for(int i=1; i<=10; i++){
cout<<f<<"x"<<i<<"="<<f*i;
cout<<endl;
}
}*/




/*
struct student{
 //int roll;
 string name;
 float fee;
 int semester;
};


int main(){
 student a;
// cin>>a.roll;
 cin>>a.name;
 cin>>a.fee;
 cin>>a.semester;


 //cout<<a.roll<<endl;
 cout<<a.name<<endl;
 cout<<a.fee<<endl;
 cout<<a.semester<<endl;

}
*/


/*
struct animal{
string name;
string specie;
int legs;
string type;
};

int main(){
animal a[3];
for(int i=0; i<3; i++){
//cin>>a[i].name;
// cin>>a[i].specie;

cin.ignore();
getline(cin, a[i].name);
cin.ignore();
getline(cin, a[i].specie);

cin>>a[i].legs;
cin>>a[i].type;
}

for(int i=0; i<3; i++){
cout<<a[i].name;
cout<<a[i].specie;
cout<<a[i].legs;
cout<<a[i].type;
cout<<endl;
}

}
*/

