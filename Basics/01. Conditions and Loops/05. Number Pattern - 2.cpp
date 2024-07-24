/*

Problem statement
Print the following pattern

Pattern for N = 4

   1
  23
 345
4567

The dots represent spaces.


Detailed explanation ( Input/output format, Notes, Images )

Sample Input :

5

Sample Output :

    1
   23
  345
 4567
56789

The dots represent spaces.

*/


// Code:


#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << " ";
        }
        
        for (int k = 1; k <= i; k++)
        {
            cout << i + k - 1;
        }

        cout << endl;
        
    }
}