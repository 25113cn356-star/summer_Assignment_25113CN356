#include <stdio.h>

int main() {
 int r, b, i, j;

 printf("Enter rows and columns: ");
scanf("%d %d", &r, &b);

 int A[r][b], B[r][b], Diff[r][b];

    printf("Enter Matrix A:\n");
for(i = 0; i < r; i++)
  for(j = 0; j < b; j++)
  scanf("%d", &A[i][j]);

 printf("Enter Matrix B:\n");
for(i = 0; i < r; i++)
  for(j = 0; j < b; j++)
  scanf("%d", &B[i][j]);

 for(i = 0; i < r; i++)
  for(j = 0; j < b; j++)
  Diff[i][j] = A[i][j] - B[i][j];

printf("\nDifference Matrix:\n");
 for(i = 0; i < r; i++) {
 for(j = 0; j < b; j++)
  printf("%d ", Diff[i][j]);
  printf("\n");
 }

 return 0;
}