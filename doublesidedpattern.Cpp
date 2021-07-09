//Pattern Double sided Arrow
// input - 7


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ext_spaces = n%2==0 ? n : n-1;
    int int_spaces = 0;
    int count = 1;
    int firsthalf = n/2 + 1;
    while(firsthalf--){
       for(int i=0; i<ext_spaces; i++)
            cout<<"  ";
        for(int i=count; i>=1; i--)
            cout<<i<<" ";
        for(int i=0; i<int_spaces; i++)
            cout<<"  ";
        if(count != 1){
            for(int i=1; i<=count; i++)
                cout<<i<<" ";
            int_spaces += 2;
        }
        else{
            int_spaces++;
        }
        cout<<endl;
        count++;
        ext_spaces -= 2;
   }
   int second_half = n - firsthalf;
   ext_spaces = 2;
   count = count - 2;
   int_spaces -= 4;
   while(second_half--){
       for(int i=0; i<ext_spaces; i++)
            cout<<"  ";
        for(int i=count; i>=1; i--)
            cout<<i<<" ";
        for(int i=0; i<int_spaces; i++)
            cout<<"  ";
        if(count != 1){
            for(int i=1; i<=count; i++)
                cout<<i<<" ";
            int_spaces -= 2;
        }
        else{
            int_spaces--;
        }
        cout<<endl;
        count--;
        ext_spaces += 2;
   }
}
