#include<stdio.h>
int main()
{
int integer,count=0;
scanf("%d",&integer);
while(integer!=0)
{
integer/=10;
count=count+1;
}
printf("%d",count);
}
