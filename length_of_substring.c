// Program to find the minimum length of a substring and 
// Maximum length of a Substring in a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void smallest(char* str)
{
   int len=strlen(str);
   int arr[20];
   int i=0,j=0,k=0,l=0;
   for(i=0;i<len-1;i++)
   {
    if(str[i]==' ')
    {
        k++;
        arr[j]=l;
      //  printf("%d ",arr[j]);
        j++;
        l=0;
        continue;
    }
    l++;
    arr[j]=l;
   }
   int min=arr[0],max=arr[0];
   for(i=0;i<=k;i++)
   {
    if(min>arr[i])
    {
        min=arr[i];
    }
    if(max<arr[i])
    {
        max=arr[i];
    }
   }
   printf("Minimum value is %d\n",min);
   printf("Maximum value is %d\n",max);

}

int main()
{
    printf("Enter the String\n");
    char str[200];
    fgets(str,200,stdin);
    //printf("Enter the character for frequency\n");
    smallest(str);
}
