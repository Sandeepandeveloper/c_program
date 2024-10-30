#include<stdio.h>
void main()
{
	int sum=0,i=1;
	do
	{
		sum=sum+8*i;
		i=i+1;
	}
	while(i<=10);
	printf("The sum of multiple of first 10 multiple of 8=%d\n",sum);
}