//Revising quadratic equations
//input - 1 -11 28
/* output - Real and distinct
            4   7        */


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int d;
d=(b*b)-(4*a*c);
int root1,root2;
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
int a1,a2;
if(root1>root2)
{
a1=root2;
a2=root1;
}
else
{
a1=root1;
a2=root2;

}

if(d>0)
{

	cout<<"Real and Distinct"<<endl;
	cout<<a1<<" "<<a2<<endl;
}
if(d==0)
{


	cout<<"Real and Equal"<<endl;
	cout<<a1<<" "<<a2<<endl;
}
if(d<0)
{

	cout<<"Imaginary"<<endl;

}
return 0;
}
