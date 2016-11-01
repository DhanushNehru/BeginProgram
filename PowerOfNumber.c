#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    int c;
    printf("Enter a number ::");
    scanf("%lf",&a);
    printf("Enter the power ::");
    scanf("%lf",&b);
    c=pow(a,b);
    printf("The power of number is = %d",c);
}
