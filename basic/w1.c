#include<stdio.h>
void main()
{
	int sum,n;
	sum=0;
	n=1;
	while(n<=10)
	{
	   sum=sum+n;
	   n=n+1;
	}
	printf("The sum of first 10 natural no.s=%d\n",sum);
}