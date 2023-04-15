// C program to convert Roman Numerals to Decimal numbers 



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int values(char c)
{
    char val[] = {'l','V','X','L','C','D','M'};
    int numval[]={1,5,10,50,100,500,1000};
    int i=0;
    for(i=0;i<7;i++)
    {
        if(c==val[i])
        {
            return numval[i];
        }
    }
}

int roman_to_number(char* rmn)
{
   int i=0,len=strlen(rmn);
   int number=values(rmn[0]),singles=0,recent=values(rmn[0]);
   for(i=1;i<len-1;i++)
   {
        int prev=values(rmn[i-1]);
            if(prev < values(rmn[i]))
            {
                number=number -prev +(values(rmn[i])-prev);
            }
            else
            {
                number=values(rmn[i])+number;
            }

            printf("%d\t",number);
        
      recent=values(rmn[i]);
   }
   return number;
}
int main()
{
    char strng[100];
    fgets(strng,100,stdin);
    
    
    printf("%d\n",roman_to_number(strng));
    
}
