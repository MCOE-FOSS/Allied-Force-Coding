/*Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.
For example:
Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].
*/

#include<iostream>
#define MAX 10

using namespace std;

int main()
{
	int nums[MAX],n,i,j,flag;
	cout<<"Enter lenght of an array of numbers\n";
	cout<<"note-\n";
	cout<<"array should have exactly two that elements appear only once and all the other elements appear exactly twice\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the element "<<i+1;
		cin>>nums[i];
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(nums[i]==nums[j]&&i!=j)
				flag=1;
		}
		if(flag==0)
			cout<<nums[i];
	}
}
