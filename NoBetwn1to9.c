#include<stdio.h>
main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a>0 && a<10)
        printf("%d",a);
    else
        printf("you entered number is not in range");
}
