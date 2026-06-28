#include<stdio.h>
int main() 
{
int ans,score=0;
printf("1. Capital of India?\n1.Mumbai\n2.Delhi\n3.Kolkata\nEnter answer: ");
scanf("%d",&ans);
if(ans==2)
score++;
printf("2. 5+3=?\n1.6\n2.7\n3.8\nEnter answer: ");
scanf("%d",&ans);
if(ans==3)
score++;
printf("Your Score = %d/2",score);
return 0;
}