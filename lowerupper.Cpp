//Lower Upper
// input - $
// output - invalid


#include<iostream>
using namespace std;

int main(){

char ch;

cin>>ch;
int b;

b=ch;


if(b>=97&&b<=122){
cout<<"lowercase"<<endl;
}
else if(b>=65&&b<=90){
cout<<"UPPERCASE"<<endl;
}
else{
    cout<<"Invalid"<<endl;
}
return 0;
}
