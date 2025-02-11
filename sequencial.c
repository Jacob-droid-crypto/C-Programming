#include<stdio.h>
int main()
{
	int i,n, pos=0,key,flag;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{	
		printf(" %d\t",a[i]);
	}
	printf("Enter a key : ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(a[i] == key)
		{
			flag = 1;
			pos = i;
			break;
		}		
	}
	if(flag ==0)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element %d is found at %d",key,pos);
	}
	return 0;
}	
					
