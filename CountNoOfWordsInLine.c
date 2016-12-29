#include<stdio.h>
main()
{
    int i=0,count=1;
    char ch[100];
    printf("Enter a line::\n");
    gets(ch);
    do
    {
        if(ch[i]==' ')
            ++count;
        i++;
    }while(ch[i]!='\0');
    printf("The number of words in the line are %d",count);
}
