#include<stdio.h>
main()
{
    int l,b,h,TotalSurfaceArea,Volume;
    printf("Enter length, breadth and height of Cuboid ::");
    scanf("%d %d %d",&l,&b,&h);
    Volume=l*b*h;
    TotalSurfaceArea=2*((l*b)+(b*h)+(h*l));
    printf("\nTotal Surface area of Cuboid is :: %d \n",TotalSurfaceArea);
    printf("Volume of Cuboid is :: %d",Volume);
}
