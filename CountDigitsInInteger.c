#include<stdio.h>
main()
{
    int count=0;
    long long int a;
    printf("Enter an integer");
    scanf("%lli",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("The number of digits in integer are %i",count);
}
