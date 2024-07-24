/*

Problem statement
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.

Print count of characters, count of digits and count of white spaces respectively (separated by space).

Detailed explanation ( Input/output format, Notes, Images )

Sample Input :
abc def4 5$

Sample Output :
6 2 2

Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)

*/

// code:

#include <iostream>
using namespace std;

int main() {
    char n;

    int chr = 0, num = 0, space = 0;

    n = cin.get();

    int i = 0;

    while (n != '$')
    {
        int ascii = n;

        if (ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122) {
            chr++;
        }
        else if (ascii >= 48 && ascii <= 57) {
            num++;
        }
        else {
            space++;
        }

        n = cin.get();
    }

    cout << chr << " " << num << " " << space;

    return 0;
}
