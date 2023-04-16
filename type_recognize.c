// This program will scan entire line and extract the integer , float and String data types presetnt in the line...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void recognize(char *string)
{
	int len=strlen(string);
	int type_int=0,i,temp;
	float type_float;
	char type_char;
	char type_string[200];
	for(i=0;i<len-1;i++)
	{
		if(string[i]>=48 && string[i]<=57)
		{
			
			while(string[i]>=48 && string[i]<=57)
			{
				temp=int(string[i]-48);
				type_int=type_int*10 + temp;
				i++;
			}
			if(string[i]=='.')
			{
				printf("\t%d.",type_int);
				i++;
				while(string[i]>=48 && string[i]<=57 &&i<len-1)
				{
					printf("%c",string[i]);
					i++;
				}
				printf(" is an Float Data\n");
			}
			else
			{
			printf("\t%d is an Integer Data\n",type_int);
	     	}
	}	
		
		else if(string[i]==','||string[i]==' ')
		{
			continue;
		}
		else
		{
			if(string[i+1]!=','||string[i+1]!=' '||string[i]!=NULL && i<len-1)
			{
				printf("\tString value is : ");
				while(string[i]!=','&&string[i]!=' '&&i<len-1)
				{
					if(string[i]==' '||string[i]==',')
					{
						continue;
					}
					printf("%c",string[i]);
					i++;
				}
				printf("\n");
			}
		}
	type_int=0;
	}
}

int main()
{
	char line[200];
	fgets(line,200,stdin);
	int len = strlen(line);
	line[len]=' '; 
	recognize(line);
}
