#include<stdio.h>
#include<math.h>
void main()
{
  int sum=0,n=1;
  while(n<=8)
  {
     sum=sum+n * n * n;
     n=n+1;               //incrementing
  }	
  printf("The sum=%d\n",sum);
}