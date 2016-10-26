#include<stdio.h>
main()
{
  int a,b,c;
  printf("Enter three numbers");
  scanf("\n %d \n %d \n %d",&a,&b,&c);
  if(a>b && a>c)
        printf("%d is greater",a);
  else if(b>c)
        printf("%d is greater",b);
  else
    printf("%d is greater",c);
  return 0;
}
