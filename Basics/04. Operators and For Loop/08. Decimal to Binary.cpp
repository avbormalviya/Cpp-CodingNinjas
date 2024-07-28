/*

Problem statement
Given a decimal number (integer N), convert it into binary and print.

Note for C++ coders:
Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types. 
The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java. 

Detailed explanation ( Input/output format, Notes, Images )

Input format :
Integer N

Output format :
Corresponding Binary number (long)

Constraints :
0 <= N <= 10^5

Sample Input 1 :
12

Sample Output 1 :
1100

Sample Input 2 :
7

Sample Output 2 :
111

Sample Input 2 :
0

Sample Output 2 :
0

*/

// code:

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    string binary = "";

    while (n >= 0) {
		if (n == 0 || n == 1) {
			binary += to_string(n);
			break;
		}

        binary += to_string(n % 2);
        n /= 2;
    }

	for (int i = 0; i < binary.length() / 2; i++) {
        swap(binary[i], binary[binary.length() - i - 1]);
    }

	cout << binary;

    return 0;
}