#include <iostream>
using namespace std;

int i=0;
class S
{
     public:
        S()
        {
            i++;
            cout<<i<<"\n";
        }
};
int main()
{
        S A[100];
        cout<<"\n";
        return 0;
}

/*What I've done is, created a global variable i with initial value 0. After that, I created a class S whose constructor increments value of i and then prints it. So, when I'd create an array of class S of size 100, a 100 hundred objects will be created and the constructor would called 100 times, printing all the values from 1 to 100 without any recusrion or loop.*/


 #include<stdio.h>

int main(){
    int num = 1;

    print(num);

    return 0;
}
int print(num){
    if(num<=100){
         printf("%d ",num);
         print(num+1);
    }
}
