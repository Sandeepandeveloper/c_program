#include<stdio.h>
void main()
{
	float sum=0,n;
	for(n=2;n<=35;n=n+3)
	{
		sum=sum+1/n;
	}
	printf("sum=%f\n",sum);
}