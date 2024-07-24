/*

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 3
 A
 BB
 CCC

Detailed explanation ( Input/output format, Notes, Images )

Constraints
0 <= N <= 26

Sample Input 1:
7

Sample Output 1:
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG

Sample Input 2:
6

Sample Output 2:
A
BB
CCC
DDDD
EEEEE
FFFFFF

*/

// code:

#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(64 + i);
        }
        
        cout << endl;
    }
}