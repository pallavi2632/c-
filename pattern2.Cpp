// Pattern Number and star - 1
// input - 5


#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n ; i++) {
		cout<<i<<" ";
	}
	cout<<endl;

		// Print n-row+1 stars
		for (int j = 1 ; j <= n - 1 ; j++) {
			for(int number=1;number<=n-j;number++){
				cout<<number<<" ";
			}
			for(int k=1;k<=2*j-1;k++){
				cout<<"*"<<" ";
			}
			cout<<endl;
		}

	return 0;
}

