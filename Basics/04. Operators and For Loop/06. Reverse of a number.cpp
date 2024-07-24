/*

Problem statement
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

Detailed explanation ( Input/output format, Notes, Images )

Input format :
Integer N

Output format :
Corresponding reverse number

Constraints:
0 <= N < 10^8

Sample Input 1 :
1234

Sample Output 1 :
4321

Sample Input 2 :
1980

Sample Output 2 :
891

*/

// code:

#include <iostream>
#include <string>
using namespace std;

string reverse(string n) {
    if (n.length() == 1) {
        return n;
    }

    char lastDigit = n[n.size() - 1];
    string remainDigits = n.substr(0, n.size() - 1);
    
    return lastDigit + reverse(remainDigits);
}

int main() {
    string n;

    cin >> n;

	cout << stoi(reverse(n));
    
    return 0;
}