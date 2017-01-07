#include <iostream>
using namespace std;


int main()
{
	int cost;
	
	cout<<"\nEnter total cost: ";
	cin>>cost;
	
	int one=0, two=0, five=0, ten=0, twenty=0, fifty=0;
	
	while(cost!=0)
	{
		if(cost>=50)
		{
			cost = cost-50;
			fifty++;
		}
		else if(cost >= 20)
		{
			cost=cost-20;
			twenty++;
		}
		else if(cost >= 10)
		{
			cost=cost-10;
			ten++;
		}
		else if(cost >= 5)
		{
			cost=cost-5;
			five++;
		}
		else if(cost >= 2)
		{
			cost = cost-2;
			two++;
		}
		else
		{
		 	cost = cost-1;
		 	one++;
		}	
	}	
	
	cout<<"50 x "<<fifty<<endl;
	cout<<"20 x "<<twenty<<endl;
	cout<<"10 x "<<ten<<endl;
	cout<<"05 x "<<five<<endl;
	cout<<"02 x "<<two<<endl;
	cout<<"01 x "<<one<<endl;
	
	return 0;
}	
	
	

