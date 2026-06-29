#include <stdio.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int count = 0, choice, i;
 while (1) {
 printf("\n1.Add Contact\n2.Display Contacts\n3.Exit\n");
  scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter Name: ");
 scanf("%s", c[count].name);
printf("Enter Phone: ");
scanf("%s", c[count].phone);
count++;
break;
case 2:
for (i = 0; i < count; i++)
 printf("%s - %s\n", c[i].name, c[i].phone);
  break;
 case 3:
return 0;
}
}
}