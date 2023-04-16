// This Program will find the frequency of the character in the String
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

frequency(char* str,char* freq)
{
    int number=0,i=0;
    for(i=0;i<strlen(str)-1;i++)
    {
       // printf("%c",str[i]);
        if(str[i]==freq)
        {
           /// printf("%c",str[i]);
            number++;
        }
    }
    return number;
}

int main()
{
    printf("Enter the String\n");
    char str[200];
    fgets(str,200,stdin);
    printf("Enter the character for frequency\n");
    char freq;
    scanf("%c",&freq);
    printf("The frequency of word %c is %d\n",freq,frequency(str,freq));
}