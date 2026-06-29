#include <stdio.h>
#include <string.h>

int main()
 {
char str[100];
int choice;
printf("Enter String: ");
scanf("%s", str);
while (1) 
{
printf("\n1.Length\n2.Reverse\n3.Uppercase\n4.Exit\n");
scanf("%d", &choice);
switch (choice)
 {
case 1:
printf("Length = %lu\n", strlen(str));
break;
case 2:
strrev(str);
printf("%s\n", str);
break;
case 3:
printf("%s\n", strupr(str));
break;
case 4:
return 0;
}
}
}