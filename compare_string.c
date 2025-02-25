#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("\n Enter the first string : ");
	scanf("%s",str1);
	printf("\n Enter the second string: ");
	scanf("%s",str2);
	if (strcmp(str1,str2)==0)
	printf("Strings are the same");
	else
	printf("Strings are not same");
	return 0;
}	
