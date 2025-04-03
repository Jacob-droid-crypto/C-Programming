#include<stdio.h>
#include<string.h>
struct Employee{
    char name[50];
    int ID;
    float salary;
};
int main()
{
int n,i;
printf("\nEnter the number of employees: ");
scanf("%d",&n);
struct Employee employees[n];
for( int i=0;i<n;i++)
{
    printf("\n Enter the details of employee %d:",i+1);
    printf("\nEnter the name : ");
    scanf("%s",employees[i].name);
    printf("Enter the ID: ");
    scanf("%d",&employees[i].ID);
    printf("Enter the salary: ");
    scanf("%f",&employees[i].salary);
}
printf("Details of employee %d:",n);
printf("\n Name:   \t ID:   \t salary:   \t \n");
for(i=0;i<n;i++)
{
    printf("%s\t",employees[i].name);
    printf("%d\t",employees[i].ID);
    printf("%.2f\t\n",employees[i].salary);
}
return 0;

}
