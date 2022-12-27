#include<stdio.h>
#include<math.h>
void main()
{
int a=100,b=200,c=300,max;
max=((a+b)+abs(a-b))/2;
max=((max+c)+abs(max-c))/2;
printf("%d",max);
}
