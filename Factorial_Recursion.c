// Online C compiler to run C program online
#include <stdio.h>
int fact(int n);
int main()
{
    int f=1,n;
    printf("Enter a non- negative number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    int f=1;
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
