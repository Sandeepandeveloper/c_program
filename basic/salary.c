#include<stdio.h>
void main()
{
	int a,s;
	printf("Enter the number of products sold in a month \n");
	scanf("%d",&a);
	if(a<40)
	s=4*a+100;
	else if(a==40)
	s=300;
	else
	s=4.5*a+150;
	printf("The salary in a month=%d\n",s);
}