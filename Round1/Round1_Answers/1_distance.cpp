#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,x,y,dist,total_dist,i;

    cout<<"enter x coordinate\t";
    cin>>x1;
    cout<<"enter y co-ordinate\t";
    cin>>y1;
    total_dist=0;
    for(i=0;i<9;i++)
    {
        cout<<"enter x coordinate\t";
        cin>>x2;
        cout<<"enter y co-ordinate\t";
        cin>>y2;

        x=x2-x1;
        x=x*x;
        y=y2-y1;
        y=y*y;
        dist=x+y;
        dist=sqrt(dist);
        total_dist=dist+total_dist;

        x1=x2;
        y1=y2;
    }
    cout<<"\n Distance\t"<<total_dist;
}

