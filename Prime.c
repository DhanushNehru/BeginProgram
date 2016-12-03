#include<stdio.h>
main()
{
    int a,i,flag=0;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=2;i<=a/2;++i)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("The number is prime");
    else
        printf("The number is not prime");
    return 0;
}

