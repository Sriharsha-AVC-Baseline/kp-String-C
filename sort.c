// This program will sort the Strings in the Lexicographic order
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(char* str)
{
    int number=0,i,j;
    char temp;
    int l=strlen(str);
     for(i=1;i<l;i++)
    for(j=0;j<l-i;j++)
	if(str[j]>str[j+1])
	{
	  temp=str[j];
	  str[j] = str[j+1];
	  str[j+1]=temp;
	}
    printf("%s ",str);
}

int main()
{
    printf("Enter the String\n");
    char str[200];
    fgets(str,200,stdin);
    sort(str);
}
