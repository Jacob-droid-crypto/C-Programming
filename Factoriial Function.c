#include <stdio.h>
int fact(int);
int main()
{
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = fact(n);
    printf("The factorial of %d is: %d\n", n, result);
    
    return 0;  
}
int fact(int a)
{
    int factorial = 1, i;
    for (i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    return factorial;
}
