#include<stdio.h>
void main()
{
	int sum=0,n=7;
	do
	{
		sum=sum+n;
		n=n+2;
	}
	while(n<=25);
	printf("The sum of A.P with 1st term 7,difference 2 and last term is 25=%d\n",sum);
}