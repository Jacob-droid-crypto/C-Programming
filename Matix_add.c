#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,rows,cols,sum[10][10];
	printf("Enter the rows and columns of the first matrix: ");
	scanf("%d %d",&rows,&cols);
	printf("Enter the rows and columns of the first matrix: ");
	scanf("%d %d",&rows,&cols);
	printf("Enter the elements of first matrix: ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second matrix:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&b[i][j]);
		}
	
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			sum[i][j]=a[i][j] + b[i][j];
		}
	}
	
	printf("Sum of matrices = \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",sum[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}				
	
