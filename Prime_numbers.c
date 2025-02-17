#include<stdio.h>
int main()
{
    int i,j,prime,limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(i=2;i<=limit;i++)
    {
        prime=1;
        for(j=2;j*j<=i;j++)
        {
            if(i % j == 0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d \t",i);
        }
    }
    printf("\n");
    return 0;
}
