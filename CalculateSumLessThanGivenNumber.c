#include<stdio.h>
main()
{
    int a,i,sum=0;
    printf("Enter the number ::");
    scanf("%d",&a);
    while(a!=0)
    {
        sum=sum+a;
        a--;
    }
    printf("%d",sum);
}
