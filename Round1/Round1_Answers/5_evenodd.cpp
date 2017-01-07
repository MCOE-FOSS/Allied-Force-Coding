#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	while(n>0)
	{
		n-=2;
	}
	if(n==0)
		cout<<"\nnumber is even";
	else 
		cout<<"\n number is odd";
}
