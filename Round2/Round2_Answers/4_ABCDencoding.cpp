#include <iostream>
#include <cstring>
using namespace std;
 
// Given a digit sequence of length n, returns count of possible
// decodings by replacing 1 with A, 2 woth B, ... 26 with Z
int countDecoding(char *digits, int n)
{
    // base cases
    if (n == 0 || n == 1)
        return 1;
 
    int count = 0;  // Initialize count
 
    // If the last digit is not 0, then last digit must add to
    // the number of words
    if (digits[n-1] > '0')
        count =  countDecoding(digits, n-1);
 
    // If the last two digits form a number smaller than or equal to 26,
    // then consider last two digits and recur
    if (digits[n-2] < '2' || (digits[n-2] == '2' && digits[n-1] < '7') )
        count +=  countDecoding(digits, n-2);
 
    return count;
}
 
// Driver program to above function
int main()
{
    char digits[26];
    cout<<"Enter the encoded msg:";
    cin>>digits;
    int n = strlen(digits);
    cout << "Count is " << countDecoding(digits, n);
    cout<<"\n\n";
    return 0;
}

