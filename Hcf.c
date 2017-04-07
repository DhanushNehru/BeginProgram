#include<stdio.h>
int gcd(int m,int n);
main()
{
    int m,n;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&m,&n);
    printf("GCD %d",gcd(m,n));
    return 0;
}
int gcd(int m,int n)
{
    if(n==0)
        return m;
    else
        return gcd(n,m%n);
}
