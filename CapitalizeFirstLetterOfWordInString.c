#include<stdio.h>
main()
{
    char ch[50];int i;
    printf("Enter a string :: ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(i==0 && ch[i]>='a' && ch[i]<='z')
            ch[i]=ch[i]-32;
        if(ch[i]==' ')
            ch[i+1]-=32;
        printf("%c",ch[i]);
    }
}
