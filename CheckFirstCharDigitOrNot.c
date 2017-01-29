#include<stdio.h>
main()
{
    char ch[30];
    printf("Enter a string ;;");
    scanf("%s",&ch);
    if(ch[0]>='0' && ch[0]<='9')
        printf("True");
    else
        printf("False");
}
