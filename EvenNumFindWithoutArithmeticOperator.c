#include<stdio.h>
main()
{
    int a;
    printf("Enter a number ::");
    scanf("%d",&a);
    if(a&1)
        printf("Odd Number");
    else
        printf("Even Number");
}
