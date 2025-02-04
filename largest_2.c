#include<stdio.h>
int main()
{
float a,b;
printf("Enter the first number:");
scanf("%f",&a);
printf("Enter the second number:");
scanf("%f",&b);
if(a>b)
{
printf("%f is the largest number",a);
}
else
{
printf("%f is the largest number ",b);
}
return 0; 
}
