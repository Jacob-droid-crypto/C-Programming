#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,d;
    printf("Enter the value of coefficient:");
    scanf("%f %f %f",&a,&b,&c);
    d=b * b - 4 * a *c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/ (2*a);
        root2=(-b-sqrt(d))/ (2*a);
        printf("The real and unreal roots are :%.2f,%.2f",root1,root2);
        
    }
    else if(d==0)
    {
        root1= root2=-b/(2*a);
        printf("The real and unreal roots are :%.2f,%.2f",root1,root2);
        
    }
    else
    {
        printf("The roots are imaginary");
    }
    return 0;
}
