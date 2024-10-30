#include<stdio.h>
void main()
{
    int a=10,b=20,temp;
    a=(a+b)-(b=a);
	printf("%d\n %d\n",a,b);
}