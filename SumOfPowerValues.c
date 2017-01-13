#include<stdio.h>
main()
{
    int num=0,sum=0,a=0,x,count=0,i,temp;
    printf("Enter a number");
    scanf("%d",&x);
    num=x;
    while(x!=0)
    {
        x%10;
        ++count;
        x=x/10;
    }
    while(num!=0)
    {
        a=num%10;
        if(count==2)
            a=a*a;
        else if(count==3)
            a=a*a*a;
        else if(count==4)
            a=a*a*a*a;
        else if(count==5)
            a=a*a*a*a*a;
        else if(count==6)
            a=a*a*a*a*a*a;
        else if(count==7)
            a=a*a*a*a*a*a*a;
        else if(count==8)
            a=a*a*a*a*a*a*a*a;
        else if(count==9)
            a=a*a*a*a*a*a*a*a*a;
        else
            a=a;
        sum=sum+a;
        num=num/10;
    }
    printf("Answer = %d",sum);
}
