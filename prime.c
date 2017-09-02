#include<stdio.h>
#include<math.h>
int main()
{
int number,count=0;
scanf("%d",&number);
if(number==2||number==3)
{
  printf("prime");
  return 0;
  }
  
else
 for(int i=2;i<=(number/2);i++)
 {
  if(number%i==0)
  {
   printf("non prime");
   return 0;
   }
   }
  printf("prime");
  return 0;
 }
