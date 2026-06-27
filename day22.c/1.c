#include<stdio.h>
int main() {
char str[100];
int i=0,j=0,flag=1;
printf("Enterstring: ");
gets(str);
while(str[j]!='\0')
j++;
j--;
while(i<j) {
if(str[i]!=str[j]) {
flag=0;
break;
}
i++;
j--;
}
if(flag)
printf("Palindrome");
else
printf("No Palindrome");
return 0;
}