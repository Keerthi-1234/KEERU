#include<stdio.h>
void fun(int cnt){
if(cnt<=50){
        printf("%d Brigosha\n",cnt);
fun(cnt+1);
}
}
int main()
{
int cnt=1;
fun(cnt);

}


