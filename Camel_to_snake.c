// This program convert the CamelCase String Format to snake_case

#include<stdio.h>
#include<String.h>
#include<stdlib.h>

void camel_to_snake(char* str)
{
    int length=strlen(str);
    int i=0,j=0;
    char nstr[200];
    if(str[0]<96)
    {
        str[0]=str[0]+32;
    }
    for(i=0;i<length-1;i++)
    {
        if(str[i]<96)
        {
            nstr[j]='_';
            j++;
            str[i]=str[i]+32;
        }
        nstr[j]=str[i];
        j++;
    }
    printf("%s",nstr);
}

int main()
{
    char str[200];
    printf("Enter the CamelCase String\n");
    fgets(str,100,stdin);
    camel_to_snake(str);
}
