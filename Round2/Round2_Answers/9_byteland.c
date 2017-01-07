    #include <stdio.h>
    #include <ctype.h>
     
    int main()
    {
      	int t,i,k;
      	char M[27],str[102];
	
		printf("Enter the language:");
      	scanf("%s",M);
	
		printf("Enter the string:");
        scanf("%s",str);
        
        for(i=0;str[i]!='\0';i++)
        {
        	if(isalpha(str[i]))
          	{
    			if(isupper(str[i]))
    			{
    	  			printf("%c",toupper(M[str[i]-'A']));
    			}
    			else
    			{
    	  			printf("%c",M[str[i]-'a']);
    			}
          	}
          	else if(str[i]=='_')
          	{
    			printf(" ");
          	}
          	else
          	{
    			printf("%c",str[i]);
          	}
        }

        printf("\n");
      
      	return 0;
    } 
