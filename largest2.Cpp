//find the largest of 5 numbers


#include<iostream>
using namespace std;

int main() {

float A,B,C,D,E;
cin>>A>>B>>C>>D>>E;

if(A>=B && A>=C && A>=D && A>=E)
    cout<<A<<endl;
	else if(B>=C && B>=A && B>=D && B>=E)
    cout<<B<<endl;
	else if(C>=B &&C>=A && C>=D && C>=E)
    cout<<C<<endl;
	else if(D>=C && D>=A && D>=B && D>=E)
    cout<<D<<endl;
else
    cout<<E<<endl;


    return 0;


}
