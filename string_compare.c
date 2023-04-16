// This program will compare two strings and prints whether the strings are equal or not equal without using strcmp 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

compare(char *str1,char *str2)
{
	if(strlen(str1)!=strlen(str2))
	{
		return 0;
	}
	else
	{
		int i=0,len=strlen(str1);
		for(i=0;i<len-1;i++)
		{
			if(str1[i]!=str2[i])
			{
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	puts("Enter the String 1");
	char str1[200];
	fgets(str1,200,stdin);
	puts("Enter the String 2");
	char str2[200];
	fgets(str2,200,stdin);
	int result=compare(str1,str2);
	if(result==1)
	{
		puts("Equal Strings");
	}
	else
	{
		puts("Unequal Strings");
	}
}
