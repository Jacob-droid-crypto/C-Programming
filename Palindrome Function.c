#include<stdio.h>
int pali(int);
int main()
{
    int n,result;
    printf("Enter the number t be checked: ");
    scanf("%d",&n);
    result=pali(n);
    if(result==n)
    {
        printf("The given number %d is palindrome",n);
    }
    else
    {
        printf("The given number %d is not plaindrome",n);
    }
    return 0;
}
int pali(int a)
{
    int original,reversed=0,remain;
    original=a;
    while(a!=0)
    {
        remain=a%10;
        reversed = reversed * 10 + remain;
        a /=10;
    }
    return reversed;
}
