#include<stdio.h>
int main()
{
int N,count=0;
scanf("%d",&N);
for(int i=1;i<=N;i++)
{
count=count+i;
}
printf("sum:%d",count);
return 0;
}
