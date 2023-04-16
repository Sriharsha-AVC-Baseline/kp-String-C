// This program will convert lower case letters to Upper case and Vice verse
#include<stdio.h>
#include<String.h>
#include<stdlib.h>

void viceverse(char* str)
{
    int length=strlen(str);
    int i=0,j=0;
    for(i=0;i<length-1;i++)
    {
       if(str[i]>64&&str[i]<96)
       {
        str[i]=str[i]+32;
       }
       else if(str[i]>=96)
       {
        str[i]=str[i]-32;
       }
    }
    printf("%s",str);
}

int main()
{
    char str[200];
    printf("Enter the String\n");
    fgets(str,100,stdin);
    viceverse(str);
}
