/*

Problem statement
Print the following pattern

Pattern for N = 4

1
23
345
4567

Detailed explanation ( Input/output format, Notes, Images )

Sample Input 1 :
3

Sample Output 1 :
1
23
345

 */


// Code:


#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1;
        }

        cout << endl;
        
    }
}