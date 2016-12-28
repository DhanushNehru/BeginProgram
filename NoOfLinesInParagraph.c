#include<stdio.h>
main()
{
    char ch[1000];int i,count=0;
    printf("Enter a paragraph::\n");
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='.')
        {
            ++count;
        }
    }
    printf("The number of lines in the paragraph is %d",count);
}
