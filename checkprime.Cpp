//Check prime
// input - 3


#include<iostream>
using namespace std;


int main() {

int n, i=2;

cin>>n;

while(i<n){
if(n%i==0){
    cout<<"Not Prime"<<" ";
	return 0;
}

i=i+1;

}
cout<<"Prime"<<" ";



}
