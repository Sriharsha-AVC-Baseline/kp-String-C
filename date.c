// Take date as input 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get_date(char *str)
{
	int day,i,number=0,temp,j=0,date[3];
	char month[20][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int length=strlen(str)-1;
	for(i=0;i<length;i++)
	{
		if(str[i]>=48&&str[i]<=57)
		{
			while(str[i]>=48&&str[i]<=57)
			{
				temp=str[i]-48;
				number=number*10+temp;
				i++;
			}
		}
		if(str[i]==' '||str[i]=='/'||str[i]=='-')
		{
			date[j]=number;
			j++;
			number=0;
			continue;
		}
		
	} 
	date[j]=number;
	if(date[0]>31 || date[1]>12 )
	{
		printf("Error");
		exit(0);
	}
	printf("%d - %s - %d",date[0],month[date[1]-1],date[2]);
}

int main()
{
	int data;
	char str[200];
	fgets(str,200,stdin);
	get_date(str);	
}
