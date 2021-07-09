// Hollow Rhombus Pattern
// Input - 7
/* output-       *****
                *   *
               *   *
              *   *
             *****           */


#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int startspaces = n - 1;
    int int_spaces = n - 2;

    for(int i=0; i<n; i++){
        for(int j=0; j<startspaces; j++)
            cout<<" ";
        startspaces--;
        if(i == 0 or i == n-1){
            for(int k=0; k<n; k++)
                cout<<"*";
        }
        else{
            cout<<"*";
            for(int k=0; k<int_spaces; k++)
                cout<<" ";
            cout<<"*";
        }

        cout<<endl;
    }

}
