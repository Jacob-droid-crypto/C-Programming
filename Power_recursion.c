// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int power( int base,int exponent);
int main()
{
    int base,exponent,powerr;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    powerr=power(base,exponent);
    printf("The power of %d raised to %d is %d",base,exponent,power(base,exponent));
    return 0;
}
int power(int base,int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if(exponent == 1)
    {
        return base;
        
    }
    else
    {
        return pow(base,exponent);
    }
}
