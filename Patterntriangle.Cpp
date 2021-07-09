//Pattern Triangle
//input - 4


#include<iostream>
using namespace std;

int main(){

int n;

cin>>n;

int row=1,spaces,number,i;
while(row<=n){
    //1. print n-row times spaces
    spaces=1;
    while(spaces<=n-row){
        cout<<' '<<'\t';
        spaces=spaces+1;
    }

    //2. print increasing numbers,row items,starting from no.=row
    number=row;
    i=1;
    while(i<=row){
        cout<<number;
        number=number+1;
		cout<<'\t';

        i=i+1;
    }

    //3. print decreasing numbers,row-1 times,starting from no.=no.-2;
    number=number-2; //decreasing numbers print will start from no.-2
    i=1;
    while(i<=row-1){
        cout<<number;
        number=number-1;
		cout<<'\t';

        i=i+1;
    }
    //4. print'\n'
    cout<<'\n';

    row=row+1;
}
}
