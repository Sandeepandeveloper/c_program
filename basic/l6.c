#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5)
	{
	   printf("A");
	   i=i+1;
	   if(i>=3)
	   break;
	   printf("B");
	}
	printf("%d",i);
}