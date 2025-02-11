#include<stdio.h>
int main()
{
	int i,n,min,max,pos1=0,pos2=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			pos1=i;
		}
		if(a[i]<min)
		{
			min = a[i];
			pos2=i;
		}
	}
	printf("\nThe max number is %d and its position is %d",max,pos1);
	printf("\nThe min number is %d and its position is %d",min,pos2);
	return 0;
}						
