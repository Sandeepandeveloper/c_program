#include<stdio.h>
void main()
{
	int sum=0,n;
	for(n=1;n<=21;n=n+2)
	{
		sum=sum+n;
	}
	printf("The sum of odd no.'s till 21=%d\n",sum);
}