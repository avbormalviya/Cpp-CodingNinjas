/*

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4

   1
  12
 123
1234

The dots represent spaces.

Detailed explanation ( Input/output format, Notes, Images )

Constraints
0 <= N <= 50

Sample Input 1:
3

Sample Output 1:
      1 
    12
  123

Sample Input 2:
4

Sample Output 2:
      1 
    12
  123
1234

*/

// code:

#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << k + 1;
        }
        
        cout << endl;
    }
}