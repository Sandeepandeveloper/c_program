#include<stdio.h>
#include<math.h>
void main()
{
  float sum=0,n=1;
  while(n<=16)
  {
     sum=sum+sqrt(n);
     n=n+3;               //incrementing
  }	
  printf("The sum=%5.2f\n",sum);
}