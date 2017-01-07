#include<stdio.h>
main()
{
    int i;char ch[20];
    printf("Enter a string::");
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
            printf("%c",ch[i]);
        else
            continue;
    }
}
