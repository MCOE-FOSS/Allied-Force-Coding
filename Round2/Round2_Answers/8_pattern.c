#include <stdio.h>

int long_com_pat(char *a, char*b)
{
	int arr[258] = {0};
	int count = 0;
	while(*a!='\0'){
		arr[*a] += 1;
		a++;
	}

	while(*b!='\0'){
		if(arr[*b] >0){
			arr[*b]-=1;
			count++;
		}
		b++;
	}
	return count;
}

int main()
{
  int t;
  char a[10002],b[10002];
  printf("How many test cases? - ");
  scanf("%d",&t);
int m=t;
  while(t--){
    printf("Test case %d\n", m-t);
        printf("String A:\n");
  	scanf("%s",a);
        printf("String 2: \n");
scanf("%s",b);
        printf("Total match :");
  	printf ("%d\n",long_com_pat(a,b));
	}
   return 0;
}
