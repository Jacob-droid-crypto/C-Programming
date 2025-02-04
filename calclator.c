#include<stdio.h>
int main()
{
	int num1,num2,sum,multiply,subtract,divide,modulus;
	char calculus;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("Enter the operator(+,-,*,//,%%) :");
	scanf(" %c",&calculus);
	switch(calculus)
	{
	case'+':sum=num1+num2;
		printf("Sum is :%d",sum);
	        break;
	case'-':subtract = num1-num2;	
		printf("The difference is :%d",subtract);
		break;
	case'*': multiply=num1*num2;
		printf("The product is :%d",multiply);
		break;
	case'/': divide=num1/num2;
		printf("The divided result: %d",divide);
		break;
	case'%':modulus=num1%num2;
		printf("The modulus is : %d ",modulus);
		break;
	default:printf("Invalid Input");
	}
	return 0;
}		
					
	
	
	
