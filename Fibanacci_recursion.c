// Online C compiler to run C program online
#include <stdio.h>
int fib(int n);
int main()
{
    int f=0,n; 
    printf("Enter the number of terms; ");
    scanf("%d",&n);
    f=fib(n);
    printf("The fibonacci series is; ");
    for( int i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
    return 0;
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) +  fib(n-2);
    }
}
