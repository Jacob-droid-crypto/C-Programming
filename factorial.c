#include<stdio.h>
int main()
{
      int num,factorial=1;
	printf("Enter the  number");
	scanf("%d",&num);
	if (num>=0){
	    while(num>0)
		    {
		    factorial=factorial*num;
		    num--;
		    }
	    printf("The factorial is :%d",factorial);
	    }
	else
	{
	printf("Invalid input");
	}
	    return 0;
}		
