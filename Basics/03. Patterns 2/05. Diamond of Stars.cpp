/*

Problem statement
Print the following pattern for the given number of rows.

Note: N is always odd.

Pattern for N = 5

  *
 ***
*****
 ***
  *

The dots represent spaces.

Detailed explanation ( Input/output format, Notes, Images )

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3

Sample Output 2:
  *
 ***
  *

*/

// code:

#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    int firstHalf = N/2 + 1;
    int secHalf = N - firstHalf;

    for (int i = 0; i < firstHalf; i++)
    {
        int j;

        for (j = 0; j < firstHalf - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < firstHalf + i - j; k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }

    for (int i = 0; i < secHalf; i++)
    {
        int j;

        for (j = 0; j <= i; j++)
        {
            cout << " ";
        }
        
        for (int k = 0; k < secHalf - i; k++)
        {
            cout << "*";
        }
        
        for (int l = 0; l < secHalf - i - 1; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
}