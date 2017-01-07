/*

One classic method for composing secret messages is called a square code.  The spaces are removed from the english text  and the characters are written into a square (or rectangle).  

For example, the sentence "If man was meant to stay on the ground god would have given us roots" is 54 characters long, so it is written into a rectangle with 7 rows and 8 columns. 

                ifmanwas
                meanttos        
                tayonthe
                groundgo
                dwouldha
                vegivenu
                sroots

The coded message is obtained by reading down the columns going left to right.   For example, the message above is coded as:

imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn  sseoau

In your program, have the user enter a message in english with no spaces between the words.  Have the maximum message length be 81 characters.  Display the encoded message.

*/

//Answer:

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = (int)str.size();
    int lb = (int)sqrt(1.0*len);
    int ub = (int)ceil(sqrt(1.0*len));
    int ans = INT_MAX;
    int r = 0, c = 0;
    for (int row = lb; row <= ub; row++)
        for (int col = row; col <= ub; col++)
            if (row * col >= len && row * col < ans)
            {
                ans = row * col;
                r = row;
                c = col;
            }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            if (j*c + i < len)
                cout << str[j*c + i]; 
        cout << " ";
    }
    cout << endl;
    return 0;
}