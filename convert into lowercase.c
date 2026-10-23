#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,l;
    printf("enter a string");
    scanf("%s",str);
{
    fgets(str,20,stdin);
    l=strlen(str);

    {
        if (str[i]>='A' && str[i]<='Z');
        {
            str[i]=str[i]+=32;
        }
    }
}
printf("loewr case string is %s",str);
return 0;
}