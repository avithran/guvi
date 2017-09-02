#include<stdio.h>
#include<math.h>
int main()
{
int firstinterval,secondinterval;
scanf("%d %d",&firstinterval,&secondinterval);
firstinterval++;
if((firstinterval%2)!=0)
 firstinterval++;
for(int i=firstinterval;i<secondinterval;i=i+2)
 printf("%d ",i);
return 0;
}
