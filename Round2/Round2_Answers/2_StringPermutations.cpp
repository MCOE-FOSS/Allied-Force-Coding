#include <iostream>
#include <time.h>
clock_t start, end;
double cpu_time_used;

using namespace std;

 

/* Function to swap two characters */

void swap(char& a, char& b)

{

    char temp;

    temp = a;

    a = b;

    b = temp;

}

 

/* Function to obtain permutations of string characters */

void permutation(string s,int i,int n)

{

    int j;

    if (i == n)

        cout << s << "\t";

    else

    {

        for (j = i; j < s.length(); j++)

        {

            swap(s[i],s[j]);

            permutation(s, i + 1, n);

            swap(s[i],s[j]);

        }  

    }

}

 

int main()

{
    string s;

    cout << "Enter the string(without spaces) : ";

    cin >> s;

    cout << endl << "The permutations of the given string : " << endl;

    start = clock();

    permutation(s, 0, s.length() - 1);

    cout << endl;

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    cout<<endl<<"CPU time used: "<<cpu_time_used<<endl;

}