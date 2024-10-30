#include<stdio.h>
#include<math.h>
void main()
{
	int sum=0,n;
	for(n=5;n<=58;n=n+6)
	{
	   sum=sum+sqrt(n);
	}
	printf("sum=%d\n",sum);
}