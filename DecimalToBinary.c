#include<stdio.h>
main()
{
    int a,x,binary=0,i=1;
    printf("Enter a decimal number ::");
    scanf("%d",&a);
    while(a!=0)
    {
        x=a%2;
        binary=binary+(x*i);
        a=a/2;
        i*=10;
    }
    printf("Binary number is %d",binary);
}
