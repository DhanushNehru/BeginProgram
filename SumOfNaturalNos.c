#include<stdio.h>
main()
{
    int n,i,sum=0;
    printf("Enter a natural number::");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of natural numbers is %d",sum);
}
