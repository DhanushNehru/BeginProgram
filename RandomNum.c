#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    int i,n;
    time_t t;
    printf("Enter the number of numbers :: ");
    scanf("%d",&n);
    srand((unsigned) time(&t));
    printf("The random number generated are ::\n");
    for(i=0;i<n;i++)
    {
         printf("%d\t",rand()%n);
    }
    return (0);
}
