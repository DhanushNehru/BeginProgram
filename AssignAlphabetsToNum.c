#include<stdio.h>
main()
{
    int i;
    printf("Enter the number ::");
    scanf("%d",&i);
    if(i>=1 && i<=26)
        printf("The alphabet is %c",64+i);
    else
        printf("No Alphabet contains this number");

}
