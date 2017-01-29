#include<stdio.h>
#include<stdbool.h>
main()
{
    char ch[30];
    scanf("%s",&ch);
    printf((ch[0]>='0' && ch[0]<='9')? "true" : "false");
}
