#include<stdio.h>
main()
{
    int i,a,mul;
    printf("Enter a number ::");
    scanf("%d",&mul);
    for(i=0;i<=10;i++)
    {
        a=mul*i;
        printf(" %d x %d = %d \n",mul,i,a);
    }
}
