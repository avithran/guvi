#include<stdio.h>
#include<math.h>
int main()
{
int number,fact=1;
scanf("%d",&number);
for(int i=1;i<=number;i++)
{
    fact=fact*i;
}
printf("%d",fact);
  return 0;
 }
