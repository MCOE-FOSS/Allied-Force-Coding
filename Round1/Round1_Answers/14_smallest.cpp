#include <iostream>
using namespace std;

int largest(int a, int b, int c, int d, int e)
{
	int m=0;

	while(a && b && c && d && e)
	{
		m++;
		a--;
		b--;
		c--;
		d--;
		e--;
	}

	return m;
}

int main()
{
	int a, b, c, d, e;
	cout<<"\nEnter five numbers: ";
	cin>>a>>b>>c>>d>>e;

	int l = largest(a, b, c, d, e);

	cout<<"\nSmallest number is: "<<l<<endl;

	return 0;
}