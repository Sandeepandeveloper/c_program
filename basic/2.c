#include<stdio.h>
void main()
{
	int a=10;
	{
	   int a=20;
	   printf("%d\n",a);
	}  
    printf("%d\n",a+3);
    printf("%d",a);
}