#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int roman_to_number(char* rmn)
{
    int number=0;
    int singles=0;
    int v=0,x=0,l=0,c=0,m=0;
    int len=strlen(rmn)-1,i;
    for(i=0;i<len;i++)
    {
        if(rmn[i]=='l' && singles<3)
        {
            number++;
            singles++;
        }
        if(rmn[i]=='V')
        {
            if(singles==1)
            {
                number=number+3;
                singles=0;
                continue;
            }
            number=number+5;
            v++;
        }
        else if(rmn[i]=='X' && v==0)
        {
            if(singles==1)
            {
                number=number+8;
                singles=0;
                continue;
            }
            number=number+10;
            x++;
        }
        else if(rmn[i]=='L'&& x==0)
        {
            if(singles==1)
            {
                number=number+48;
                singles=0;
                continue;
            }
            number=number+50;
            l++;
        }
        else if(rmn[i]=='C'&& l==0)
        {
            if(singles==1)
            {
                number=number+98;
                singles=0;
                continue;
            }
            number=number+100;
        }

    }
    return number;
}
int main()
{
    char strng[100];
    fgets(strng,100,stdin);
    if(strng[0]>=48&&strng[0]<=57)
    {
          
    }
    else
    {
    printf("%d\n",roman_to_number(strng));
    }
}