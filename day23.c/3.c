#include<stdio.h>
int main() {
char s1[100],s2[100];
int i,c1[256]={0},c2[256]={0},flag=1;
printf("Enter first string: ");
gets(s1);
printf("Enter second string: ");
gets(s2);
for(i=0;s1[i]!='\0';i++)
c1[s1[i]]++;
for(i=0;s2[i]!='\0';i++)
c2[s2[i]]++;
for(i=0;i<256;i++) {
if(c1[i]!=c2[i]) {
flag=0;
break;
}
}
if(flag)
printf("Anagram");
else
printf("Not Anagram");
return 0;
}