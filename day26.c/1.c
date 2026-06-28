#include<stdio.h>
int main()
 {
int num=25,guess;
printf("Guess number (1-50): ");
scanf("%d",&guess);
if(guess==num)
printf("Correct Guess!");
else if(guess<num)
printf("Too Low!");
else
printf("Too High!");
return 0;
}