#include <stdio.h>
int main() {
int n, i, j, flag = 1;
printf(" order of the matrix: ");
scanf("%d", &n);
int a[n][n];
printf("elements of the matrix:\n");
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
scanf("%d", &a[i][j]);
}
}
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
if(a[i][j]!=a[j][i]) {
flag=0;
break;
}
}d
}
if(flag==1)
printf("The matrix is Symmetric.");
else
printf("The matrix is Not Symmetric.");

return 0;
}