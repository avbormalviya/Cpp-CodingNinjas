/*

Problem statement
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).

Print the prime numbers in different lines.

Detailed explanation ( Input/output format, Notes, Images )

Constraints :
1 <= N <= 100

Sample Input 1:
9

Sample Output 1:
2
3
5
7

Sample Input 2:
20

Sample Output 2:
2
3
5
7
11
13
17
19

*/

// code:

#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        int j = 2;
        bool isPrime = true;

        while (j < i)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }

            j++;
        }
        if (isPrime) {
            cout << i << endl;
        }
    }
}