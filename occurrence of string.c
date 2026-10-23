  #include<stdio.h>
int main()
{
    char str [10],ch;
    int count=0,a=0;
    printf("enter a string");
    scanf("&s",str);
    printf("enter a character");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
        a=count-1;
        
    }

    printf("occurrence %d",a);
    return 0;
}