#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,l,lowercase=0,uppercase=0,digits=0,spacalcase=0;
    printf("enter a string");
    fgets(str,30,stdin);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
       if(str[i]>='a' && str[i]>='z')
       lowercase++;
       else
       if(str[i]>='A' && str[i]>='Z')
       uppercase++;
       else
       if(str[i]>=0 && str[i]>=9)
       digits++;
       else
       if(spacalcase)
       spacalcase++;
    }
    printf("lowercase %d",lowercase);
    printf("uppercase %d",uppercase);
    printf("digits %d",digits);
    printf("spacalcase %d",spacalcase);
    return 0;

}