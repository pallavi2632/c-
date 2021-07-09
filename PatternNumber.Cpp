// Pattern Number Ladder
// Input - 4
/* Output - 1
            2  3
            4  5  6
            7  8  9  10  */


#include<iostream>
using namespace std;

int main(){

int n;
int row,i;
int number=1;

cin>>n;

row=1;
while(row<=n){
        i=1;
        while(i<=row){
            cout<<number<<'\t';
            number=number+1;
            i=i+1;
        }
cout<<endl;

row=row+1;

}

return 0;
}

