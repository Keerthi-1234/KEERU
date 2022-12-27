#include <stdio.h>
int main(){
 int i,a[5]={1,2,3,4,5},max;


 for(i=0;i<5;i++){
 if(a[i]>max)
     max=a[i];

     printf("%d",max);
 }
}
