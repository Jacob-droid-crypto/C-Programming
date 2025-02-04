#include<stdio.h>
int main()
{
	int num,sum=0;
	int i=1;
	printf("Enter a number :");
	scanf("%d",&num);
	while(i<=num)
		{
		sum=i+sum;
		i++;
		}
	printf("The sum of first %d numbers is :%d",num,sum);
return 0 ;
}		
	
