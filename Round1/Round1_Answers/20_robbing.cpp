#include<iostream>
#define MAX 20
using namespace std;

int main()
{
	int total_house,amount[MAX],i,odd_amount,even_amount;
	cout<<"Enter the number of house\t";
	cin>>total_house;
	
	for(i=1;i<=total_house;i++)
	{
		cout<<"Enter the amount of money in house"<<i<<"\t";
		cin>>amount[i];
	}
	odd_amount=0;
	for(i=1;i<=total_house;i=i+2)
	{
		odd_amount=amount[i]+odd_amount;
	}
	
	even_amount=0;
	for(i=2;i<=total_house;i=i+2)
	{
		even_amount=amount[i]+even_amount;
	}
	
	if(even_amount>odd_amount)
		cout<<"largest amount is"<<even_amount;
	else
		cout<<"largest amount is"<<even_amount;
	
}
