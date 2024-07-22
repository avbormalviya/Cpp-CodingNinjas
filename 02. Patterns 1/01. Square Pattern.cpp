/*

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
4444
4444
4444

Detailed explanation ( Input/output format, Notes, Images )

Constraints
0 <= N <= 50

Sample Input 1:
7

Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777

Sample Input 1:
6

Sample Output 1:
666666
666666
666666
666666
666666
666666

*/

// code:

#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << N;
        }

        cout << endl;
    }
}