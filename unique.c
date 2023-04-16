// This program doesnot print the repeating characters in the String 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char unique(char* str)
{
    int number=0,i=0,j=0,k=1;
    for(i=0;i<strlen(str)-1;i++)
    {
       
       for(j=i+1;j<strlen(str)-1;j++)
       {
        if(str[i]==str[j] && str[i]!='0')
        {
        	if(str[j]==' ')
        	{
        		continue;
			}
           str[j]='0';
           k++;
        }
       }
       if(str[i]=='0')
       {
       	k=1;
       	continue;
	   }
       printf("%c",str[i]);
       k=1;
    }
}

int main()
{
    printf("Enter the String\n");
    char str[200];
    fgets(str,200,stdin);
    unique(str);
}
