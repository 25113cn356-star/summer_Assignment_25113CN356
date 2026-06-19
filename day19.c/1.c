#include <stdio.h>

int main() {
 int a, c, i, j;

 printf("Enter rows and columns: ");
 scanf("%d %d", &a, &c);

int A[a][c], B[a][c], Sum[a][c];

 printf("Enter elements of Matrix A:\n");
for(i = 0; i < a ; i++)
  for(j = 0; j < c; j++)
 scanf("%d", &A[i][j]);

 printf("Enter elements of Matrix B:\n");
 for(i = 0; i < a; i++)
 for(j = 0; j < c; j++)
 scanf("%d", &B[i][j]);

for(i = 0; i < a; i++)
 for(j = 0; j < c; j++)
  Sum[i][j] = A[i][j] + B[i][j];

 printf("\nSum Matrix:\n");
 for(i = 0; i < a; i++) {
 for(j = 0; j < c; j++)
 printf("%d ", Sum[i][j]);
  printf("\n");
 }

 return 0;
}