#include <stdio.h>
void main()
{
	int sum=0,n=1;
	while(n<=9)
	{
		sum=sum+n*n;
        n=n+2;            //incrementing
	}
	printf("Sum=%d\n",sum);	
}