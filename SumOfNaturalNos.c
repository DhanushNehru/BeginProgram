#include<stdio.h>
#include<math.h>
main()
{
    int n,sum=0;
    printf("Enter a natural number::");
    scanf("%d",&n);
    sum=((n*(n-1)) / 2);
    printf("The sum of natural numbers is %d",sum);
}
