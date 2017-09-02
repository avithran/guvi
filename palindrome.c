#include<stdio.h>
int main()
{
int number,remainder=0,r=0,original;
original=number;
scanf("%d",&number);
while(number!=0)
{
remainder=number%10;
r=r*10+remainder;
number=number/10;
}
if(original==r)
 printf("palindrome");
else
 printf("not palindrome");
return 0;
}
