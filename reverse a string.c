#include<stdio.h>
#include<string.h>
int main()
{
    char reverse[100];
    int i,l;
    printf("enter a number");
   
    {
    fgets(reverse,100,stdin);
    l=strlen(reverse);

    if(l>0 && reverse[l-1]=='\n')
    {
        reverse[--l]=0;
    }
    }
   
    printf("reverse");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",reverse[i]);
    }
    return 0;
}