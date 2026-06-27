#include<stdio.h>
int main() {
int R,c,i,j,sum;
printf("Enter rows and columns: ");
scanf("%d%d",&R,&c);

int a[R][c];

printf("Enter matrix elements:\n");
for(i=0;i<R;i++) {
for(j=0;j<c;j++) {
scanf("%d",&a[i][j]);
}
}

for(j=0;j<c;j++) {
sum=0;
for(i=0;i<R;i++) {
sum=sum+a[i][j];
}
printf("Sum of column %d = %d\n",j+1,sum);
}

return 0;
}