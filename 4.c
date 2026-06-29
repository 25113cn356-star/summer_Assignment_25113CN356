#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
};

int main() {

    struct Item item[100];
    int count = 0, choice, i;

 while (1) {
 printf("\n1.Add Item\n2.Display Items\n3.Exit\n");
 scanf("%d", &choice);
  switch (choice) {
  case 1:
  printf("Enter ID: ");
   scanf("%d", &item[count].id);
  scanf("%s", item[count].name);
  printf("Enter Quantity: ");
   scanf("%d", &item[count].qty);
    count++;
   break;
  case 2:
  printf("\nID\tName\tQuantity\n");
 for (i = 0; i < count; i++)
  printf("%d\t%s\t%d\n",
item[i].id,
    item[i].name,
 item[i].qty);
break;
 case 3:
  return 0;
 }
 }
}