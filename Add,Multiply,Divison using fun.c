#include<stdio.h>
int add(int,int);
void mul(int,int);
int quo(float,float);
int main()
{
    int x,y,result,div_result;
    printf("Enter the numbers:");
    scanf("%d %d",&x,&y);
    result=add(x,y);
    printf("The sum of two numbers are:%d\n ",result);
    mul(x,y);
    div_result=quo(x,y);
    printf("The quotient of two numbers is : %d\n",div_result);
    return 0;
}
int add(int a,int b)
{
    int sum=0;
    sum = a + b;
    return sum;
}
void mul(int a,int b)
{
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    int product =1;
    product = a*b;
    printf("The product of two numbers is: %d\n",product);
}
int quo(float a,float b)
{
    int divvi;
    divvi=a/b;
    return divvi;
}
