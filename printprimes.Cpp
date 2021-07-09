// Print primes
// Input - 10
// Output - 2 3 5 7


#include<iostream>
using namespace std;

int main() {


int n;

cin>>n;
int number=2;
while(number<=n){
    int i=2;
    bool isPrime=true;

while(i<number){
if(number%i==0){
    isPrime=false;
}

i=i+1;

}
if(isPrime==true){
    cout<<number<<'\n';
}

number=number+1;
}
cout<<endl;

return 0;
}
