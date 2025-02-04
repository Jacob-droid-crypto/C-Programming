#include<stdio.h>
#define pi 3.14
int main()
{
int radius;
float area;
printf("Enter the radius :");
scanf("%d", &radius);
area = pi * radius * radius;
printf("The area of the circle is %f \n", area);
return 0;
}
