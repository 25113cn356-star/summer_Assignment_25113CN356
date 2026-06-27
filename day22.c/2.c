#include<stdio.h>
int main() {
char str[100];
int i,words=1;
printf("Entersentence: ");
gets(str);
for(i=0;str[i]!='\0';i++) {
if(str[i]==' ')
words++;
}
printf("Total words = %d",words);
return 0;
}