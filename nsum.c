#include<stdio.h>
int main()
{
int N[100],count=0;
 for(int i=0;i<=N;i++)
{ 
scanf("%d",&N[i]);
 }
for(int i=0;N[i]!='\0';i++)
{
count=count+N[i];
}
printf("sum:%d",count);
return 0;
}
