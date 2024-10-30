#include<stdio.h>
void main()
{
	float x,y;
	printf("Enter the value of x\n");
	scanf("%f",&x);
	if(x<=3)
	y=x;
	else
	y=x*x+11;
	printf("The value of y=%0.2f\n",y);
}