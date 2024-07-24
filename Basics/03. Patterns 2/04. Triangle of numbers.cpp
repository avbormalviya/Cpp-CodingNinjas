/*

Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 4

           1
          232
         34543
        4567654

The dots represent spaces.

Detailed explanation ( Input/output format, Notes, Images )

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
           1
          232
         34543
        4567654
       567898765

Sample Input 2:
4

Sample Output 2:
           1
          232
         34543
        4567654

*/

// code:

#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int j;

        for (j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << k + i + 1;
        }

        for (int l = 0; l < i; l++)
        {
            cout << i * 2 - l;
        }
        
        cout << endl;
    }
}