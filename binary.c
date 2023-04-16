// This program converts Binary numbers to Decimal numbers
#include<stdio.h>
#include<stdlib.h>
#include<String.h>

// Binary To Decimal Converter
int binary(char *bnry,int length)
{
	int decimal=0;
	int two=1,i;
	for(i=length-1;i>=0;i--)
	{
		if(bnry[i]=='1')
		{
			decimal = decimal + two;
			two=two*2;
		}
		else if(bnry[i]=='0')
		{
			two=two*2;
		}
	}
	return decimal;
}
int main()
{
	printf("Enter the Binary value : ");
	char str[100];
	fgets(str,100,stdin);
	int len = strlen(str);
	printf("%d is the Decimal Value\n",binary(str,len));
}
