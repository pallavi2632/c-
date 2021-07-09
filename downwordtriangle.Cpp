//Downward Triangle Pattern
// input - 6


#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int spaces=0;

	while(n>=1){
		for(int i=0;i<spaces;i++)
		cout<<" ";
		for(int i=0;i<n;i++)
		cout<<"*"<<" ";

		cout<<endl;
		n--;
		spaces++;
	}
	return 0;
}
