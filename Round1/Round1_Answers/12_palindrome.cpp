#include<iostream>
using namespace std;

int main()
{
	int number, number2, number3, reverse, digit, flag=0;

	cout<<"\nEnter the number: ";
	cin>>number;

	number2 = number;

	do
	{
		number3=number;
		digit=0;
		reverse=0;

		do
	    {
        	digit = number3%10;
        	reverse = (reverse*10) + digit;
        	number3 = number3/10;
     	}while (number3!=0);

     	if(number==reverse)
     	{	
		    cout << "Higher palindrome: "<<number<<endl;
			flag=1;
		}

		number++;

	}while(flag!=1);

	flag=0;

	do
	{
		number3=number2;
		reverse=0;
		digit=0;

		if(number2==0)
		{
			cout<<"\nNo lesser palindrome found :(";
			flag=1;
		}

		do
	    {
        	digit = number3%10;
        	reverse = (reverse*10) + digit;
        	number3 = number3/10;
     	}while (number3!=0);

     	if(number2==reverse)
     	{	
		    cout << "Lesser palindrome: "<<number2<<endl;
			flag=1;
		}

		number2--;

	}while(flag!=1);

}
