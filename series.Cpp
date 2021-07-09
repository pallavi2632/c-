//Print Series
//input - 10 4


#include<iostream>
using namespace std;

int main(){
     int n1, n2;
     cin>>n1>>n2;
     int i = 1;
     for(int i=1; i<=n1; i++){
          int term = 3 * i + 2;
          if(term %n2 == 0){
               n1++;
               continue;
          }
          cout<<term<<endl;
     }
}
