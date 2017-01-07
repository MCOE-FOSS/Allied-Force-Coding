#include<iostream>
#include<string.h>
 
using namespace std;
 
int main()
{
	int tc;
        cout<<"\nHow many strings u want to enter:";
	cin >> tc;
	for(int t=1;t<=tc;t++)
	{
		string inp;
                cout<<"\nEnter string ",t," : ";
		cin >> inp;
		int len = inp.length();
		int ans=0;
		for(int i=0;i<len;i++)
		{
			if(inp[i]=='A' or inp[i]=='D' or inp[i]=='O' or inp[i]=='P' or inp[i]=='Q' or inp[i]=='R')
				ans++;
			else if(inp[i]=='B')
				ans+=2;
		}
                cout<<"\nNumber of Holes in the text are:";
		cout<<ans<<endl;
	}
	return 0;
}
