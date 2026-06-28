#include<stdio.h>
int main() 
{
int roll;
char name[50];
float marks;
printf(" Roll No: ");
scanf("%d",&roll);
printf("Name: ");
scanf("%s",name);
printf("Marks: ");
scanf("%f",&marks);
printf("\nStudent Record\n");
printf("Roll No: %d\n",roll);
printf("Name: %s\n",name);
printf("Marks: %.2f",marks);
return 0;
}