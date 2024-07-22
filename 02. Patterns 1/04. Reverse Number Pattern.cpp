/*

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
1
21
321
4321

Detailed explanation ( Input/output format, Notes, Images )

Constraints
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
1
21
321
4321
54321

Sample Input 2:
6

Sample Output 2:
1
21
321
4321
54321
654321

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
            cout << i - j + 1;
        }
        
        cout << endl;
    }
}