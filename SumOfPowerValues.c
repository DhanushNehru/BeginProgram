#include<stdio.h>
main()
{
    int num,sum=0,a;
    printf("Enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        a=num%10;
        sum=sum+(a*a*a*a);
        num=num/10;
    }
    printf("Answer = %d",sum);
}
