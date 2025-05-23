#include<iostream>
using namespace std;
struct animal{
string name;
string color;
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
getline(cin, a[i].color);

cin>>a[i].legs;
cin>>a[i].type;
cout<<endl;
}

for(int i=0; i<3; i++){
cout<<a[i].name;
cout<<a[i].color;
cout<<a[i].legs;
cout<<a[i].type;
cout<<endl;
}

}

