#include<stdio.h>
void main()
{
	int x,s;
	printf("Enter the no of products sold in the month \n");
	scanf("%d",&x);
	if(x<40)
	s=4*x+100;
	else if(x==40)
	s=300;
	else(x>40)
	s=5*x+150;
	printf("The monthly salary=%d\n",s);
}