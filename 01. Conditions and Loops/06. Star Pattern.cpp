/*

Problem statement
Print the following pattern

Pattern for N = 4


Hint

As taught in the video, you just have to modify the code so that instead of printing numbers, it should output stars ('*').
The dots represent spaces.


Detailed explanation ( Input/output format, Notes, Images )

Constraints :

0 <= N <= 50


Sample Input 1 :

3

Sample Output 1 :

   *
  *** 
 *****

Sample Input 2 :

4

Sample Output 2 :

    *
   *** 
  *****
 *******

*/


// Code:


#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int j;
        
        for (j = 1; j < N - i; j++)
        {
            cout << " ";
        }
        
        for (int k = 0; k <= N - j + i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}