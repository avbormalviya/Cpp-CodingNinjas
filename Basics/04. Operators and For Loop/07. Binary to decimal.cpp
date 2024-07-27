/*

Problem statement
Given a binary number as an integer N, convert it into decimal and print.

Detailed explanation ( Input/output format, Notes, Images )

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100

Sample Output 1 :
12

Sample Input 2 :
111

Sample Output 2 :
7

*/

// code:

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cin >> n;

    int i = 0;
    int lastDigit;
    int decimal = 0;

    while(n > 0) {
        lastDigit = n % 10;
        decimal += lastDigit * pow(2, i);
        
		i++;
		n /= 10;
    }

    cout << decimal;
    return 0;
}