#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch[30];
    int i,l;
    printf("emter a string");
    fgets(str,30,stdin);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        strcpy(ch,str);

    }
    printf("copy character %s",ch);
    return 0;
}
