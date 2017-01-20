#include<stdio.h>
main()
{
    int num[25],i,temp=0;
    printf("Enter 25 Integer Elements ::\n");
    for(i=1;i<=25;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1;i<=25;i++)
    {
        if(temp<num[i])
            temp=num[i];
    }
    printf("The largest number is %d",temp);
}
