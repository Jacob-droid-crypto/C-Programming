#include <stdio.h>
int mul(int, int);

int main() 
{
    int num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    product = mul(num1, num2);
    printf("The product is: %d\n", product);
    return 0;
}
int mul(int a, int b) 
{
    return a * b; 
}
