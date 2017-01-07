#include <iostream>
#define MAX 10
using namespace std;

int main()
{
	int arr[MAX];
	int n,i,j;
	
	cout<<"\nEnter the size of array : ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the element "<<i+1 << " : ";
		cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(j=i;j<n;j++)
			{
				arr[j]=arr[j+1];
				
			}
			arr[n-1]=0;
		}
	}
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
                cout<<"\n\n";
}
