#include<stdio.h>
#include<math.h>
void main()
{
  int sum=0,n=1;
  while(n<=8)
  {
     sum=sum+pow(n, 3);
     n=n+1;               //incrementing
  }	
  printf("The sum=%d\n",sum);
}