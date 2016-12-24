#include<stdio.h>
main()
{
    int b=15,c=45,sum1=0,sum2=0;
    while(b!=0)
    {
        sum1=sum1+b;
        b--;
    }
    printf("Sum of numbers between 1 to 15 %d \n",sum1);
    for(b=15;b<=c;b++)
    {
        if(b%2==1)
            sum2=sum2+b;
    }
    printf("Sum of odd nuumbers between 15 to 45 %d \n",sum2);
    printf("Sum of numbers between 1 to 15 & Sum of odd nuumbers between 15 to 45 :: %d ",sum1+sum2);
}
