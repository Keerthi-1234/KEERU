#include <stdio.h>
#include<string.h>
int main() {
 char i,a[100],v=0,c=0;
 printf("enter the string:\n");
 gets(a);
 for(i=0;i<strlen(a);i++){
 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
 v++;

else if(a[i]<='0'&&a[i]>='9')
c++;
}
printf("vowel=%d\n",v);
printf("consonant=%d\n",c);
}
