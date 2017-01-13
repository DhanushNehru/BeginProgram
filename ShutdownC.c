#include<stdio.h>
#include<stdlib.h>
main()
{
     char shut;
     printf("Do you want to Shut down computer (Y/N)::");
     scanf("%c",&shut);
     if(shut=='Y' && shut=='y')
        system("shutdown -s");
     else
        printf("Your computer is not shut down");
}
