// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
char i,a[20]="hemachandran17",alp=0,dig=0,vowel=0;
for(i=0;i<strlen(a);i++){
        scanf("%d",&a[i]);
}
   for(i=0;i<strlen(a);i++){
   if(a[i]>='a'&&a[i]<='z')
   alp++;
   else if(a[i]>='0'&&a[i]<='9')
   dig++;
   else
   vowel++;

   printf("alp=%d dig=%d vowel=%d",alp,dig,vowel);
   }
}
