//Square pyramid pattern
// input - 5


#include <iostream>
using namespace std;

int main()
{

    int i, j, rows;


    cin >> rows;

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << j*j << " ";
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
