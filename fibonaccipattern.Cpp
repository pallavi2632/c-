//Fibonacci Pattern
// input - 4


#include<iostream>
using namespace std;

int main(){

int n;
int row;
int a=0, b=1;
	int c=0,i;


cin>>n;
row=0;
while(row<=n){

        for(int i=0;i<row;i++){

            a=b;
        b=c;
 cout<<c<<'\t';
            c=a+b;


        }
cout<<endl;

row=row+1;

}

return 0;
}

