#include<stdio.h>
main()
{
    int i,flag=0;
    char ch[200];
    printf("Enter a string ::");
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
            ++flag;
        else
            continue;
    }
    printf("The number of alphabets present in the string are :: %d",flag);
}
