#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first number :\n");
scanf(" %d",& a);
printf("Enter the second number :\n");
scanf(" %d",&b);
printf("Enter the third number :\n");
scanf(" %d",&c);
if(a>b)
{
if(a>c)        
{
printf("%d is the largest number",a);
}
else
{
printf("%d is the largest number",c);
}
}
else
{
if(b>c)
{
printf("%d is the largest number",b);
}
else
{
printf("%d is the largest number",c);
}
}

return 0;
}
