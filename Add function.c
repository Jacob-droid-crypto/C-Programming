#include <stdio.h>
int add(int, int);

int main() 
{
    int num1, num2, sum;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Function call
    sum = add(num1, num2);
    
    // Display the result
    printf("The sum is: %d\n", sum);
    
    return 0;
}

// Function definition
int add(int a, int b) 
{
    return a + b;  // Return the sum
}
