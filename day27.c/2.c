#include<stdio.h>
int main()
 {
int id;
char name[50];
float salary;
printf("Employee ID: ");
scanf("%d",&id);
printf(" Employee Name: ");
scanf("%s",name);
printf(" Salary: ");
scanf("%f",&salary);
printf("\nEmployee Details\n");
printf("ID: %d\n",id);
printf("Name: %s\n",name);
printf("Salary: %.2f",salary);
return 0;
}