#include<stdio.h>
int main()
{
	char str[100],temp;
	int length,i,j;
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	for(length = 0;str[length]!= '\0';length ++);
	i = length - 1;
	for(j=0;j<length/2;j++)
	{
		temp = str[i];
		str[i]=str[j];
		str[j]=temp;
		i--;
	}
	printf("\n Reversed string is : %s ",str);
	return 0;
}			
