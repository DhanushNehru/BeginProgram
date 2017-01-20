#include<stdio.h>
main()
{
    int a,count=0;char ch[50];
    printf("Enter a string ::");
    scanf("%s",&ch);
    for(a=0;a<strlen(ch);a++)
    {
        if(ch[a]>='0' && ch[a]<='9')
        {
            ++count;
        }
    }
    printf("The number of numeric characters in string are :: %d",count);
}
