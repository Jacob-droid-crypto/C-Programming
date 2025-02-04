#include<stdio.h>
int main()
{
int roll_no,age;
float height;
char grade;
printf("Enter the roll number:");
scanf("%d",&roll_no);
printf("Enter the age : ");
scanf("%d",&age);
printf("Enter your height :");
scanf("%f",&height);
printf("Enter your grade :");
scanf("%c ",&grade);
printf("The roll number of the student is %d \n ",roll_no);
printf(" The age of the student is %d \n",age);
printf(" The height of the student is %f \n",height);
printf("The grade of the student is %c \n",grade);
return 0;
}

