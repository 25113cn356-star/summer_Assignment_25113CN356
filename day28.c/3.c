#include <stdio.h>

int main() {
    int seats = 50, choice, n;

    while (1) {
  printf("\n1.Book Ticket\n2.Available Seats\n3.Exit\n");
   scanf("%d", &choice);

 switch (choice) {

  case 1:
  printf("Enter tickets: ");
   scanf("%d", &n);
   seats -= n;
                  
  if (n <= seats) {
  printf("Booking Successful\n");
                } else
                    printf("Not Enough Seats\n");
                break;
            case 2:
                printf("Available Seats = %d\n", seats);
     break;
   case 3:
   return 0;
        }
    }
}