#include<stdio.h>
void readArray(int arr[],int size);
void printArray(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    readArray(arr,size);
    printArray(arr,size);
    
}
void readArray(int arr[],int size)
{
    int i;
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int size)
{
    
    printf("The elements of the array are: " );
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
