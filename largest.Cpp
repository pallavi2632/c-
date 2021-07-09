//Find largest of 3 numbers


#include<iostream>
using namespace std;

int main() {

int A,B,C;
cin>>A>>B>>C;

if(A>=B&&A>=C){
    cout<<A<<endl;
}
else if(B>=C&&B>=A){
    cout<<B<<endl;
}
else{
    cout<<C<<endl;
}

    return 0;
}
