#include<iostream>
using namespace std;

int main()
{
  int i,dontation[100],temp,avg,large[20],k,j;
  avg=0;
  temp=0;
  for (i = 0; i < 10; i++)
        {
          cout << "Enter number "<< i+1 << " =\t";
          if (!(cin >> dontation [i]))
          {
              cin.clear();
              break;
          }
          else
            temp += dontation[i];
        }
 
 cout<<"\nTotal of numbers is :"<<temp;
 if(i==0)
 {
  i++;
  avg=temp/i;
  cout<<"\nAverage is:"<<avg;
 }
 

 avg=(temp/i);
 cout<<"\nAverage is :"<<avg<<"\n";


 k=i;
 i=0;j=0;
  do
  {
  
   if(dontation[i]>avg)
   {
     large[j]=dontation[i];
     
     j++;
   }
i++;
 }while(i!=k);
 cout<<"\nNumbers greater than avgerage are:\t";
 for(k=0;k<j;k++)
 {
   cout<<large[k]<<"\t";
 }
 cout<<"\n";
}
