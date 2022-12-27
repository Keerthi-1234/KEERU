#include<stdio.h>
int main(){
  char i,a[10]="string";
  for(i=0;i<10;i++){
 if(a[i]<='A'&&a[i]>='Z')
  a[i]=a[i]-32;
  else
  a[i]=a[i]+32;
  }
  printf("%s",a);


}
