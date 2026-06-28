#include<stdio.h>
int main()
 {
int choice,amount,balance=5000;
printf("1.Withdraw\n2.Deposit\n3.Check Balance\nEnter choice: ");
scanf("%d",&choice);
switch(choice)
 {
case 1:
printf("Enter amount: ");
scanf("%d",&amount);
if(amount<=balance)
 {
balance=balance-amount;
printf("Remaining Balance = %d",balance);
}
else
printf("Insufficient Balance");
break;
case 2:
printf("Enter amount: ");
scanf("%d",&amount);
balance=balance+amount;
printf("Updated Balance = %d",balance);
break;
case 3:
printf("Balance = %d",balance);
break;
default:
printf("Invalid Choice");
}
return 0;
}