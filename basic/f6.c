#include<stdio.h>
void main()
{
	int sum=0,n;
	for(n=7;n<=27;n=n+4)
	{
   		sum=sum+n*n;
	}
    printf("The sum of indiv. sq. from 7 with d=4 and last term is 27=%d\n",sum);
}