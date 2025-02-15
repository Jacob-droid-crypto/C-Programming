#include <stdio.h>
#include<math.h>
int main()

{
    int num,originalnum,result=0,i=0,remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    originalnum=num;
    
    while(originalnum!=0)
    {
        originalnum/=10;
        i++;
    }
    originalnum=num;
    while(originalnum!=0)
    {
        remainder = originalnum%10;
        result+=pow(remainder,i);
        originalnum/=10;
    }
    if(result==num)
    {
        printf("The number %d is Armstrong",num);
    }
    else
    {
    printf("The number %d is not Armstrong",num);
    }    
return 0;
}
