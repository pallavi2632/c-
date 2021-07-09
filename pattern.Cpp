//Pattern Numbers and star -2
// input - 8


#include <iostream>
using namespace std;

int main() {

	int n, row;
	cin >> n;

	for (row = 1; row <= n ; row++) {
		// Print row times numbers
		for (int i = 1 ; i <= row ; i++) {
			cout << i;
		}

		// Print n-row+1 stars
		for (int j = 1 ; j <= n - row  ; j++) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}

