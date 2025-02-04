#include<stdio.h>
int main()
{
	int num,modified_num,rever_no=0,remainder;
	printf("Enter the number: ");
	scanf("%d",&num);
	modified_num=num;
	while(num!=0)
		{
		remainder=num%10;
		rever_no=rever_no*10+remainder;
		num=num/10;
		}
	printf("%d is the Reversed form ",rever_no);
	if(modified_num==rever_no)
	  {
	  printf("\n It is palindrome");
	  }
	 else
	  {
	  printf("\n It's not palindrome");
	  }
	return 0;
}		
