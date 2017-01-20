#include<stdio.h>
main()
{
    int a,count=0;char ch[100];
    gets(ch);
    for(a=0;a<strlen(ch);a++)
    {
        if((ch[a]>='0' && ch[a]<='9')||(ch[a]>='A' && ch[a]<='Z')||(ch[a]>='a' && ch[a]<='z'))
            continue;
        else
            ++count;
    }
    printf("The number of special characters in the string are %d",count);
}
