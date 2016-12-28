#include<stdio.h>
main()
{
    int a,b,temp;
    printf("Enter first number ::");
    scanf("%d",&a);
    printf("Enter second number ::");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("The numbers after swapping are ::\n");
    printf("The first number is::%d\nThe second Number is::%d\n",a,b);
}
