/*

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
333
22
1

Detailed explanation ( Input/output format, Notes, Images )

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
55555 
4444
333
22
1

Sample Input 2:
6

Sample Output 2:
666666
55555 
4444
333
22
1

*/

// code:

#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << N - i;
        }
        
        cout << endl;
    }
}