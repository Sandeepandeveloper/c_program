#include<stdio.h>
#include<math.h>
void main()
{
	float x,y;
	printf("Enter a number\n");
	scanf("%f",&x);
	y=exp(x);
	printf("The exponential value=%f\n",y);
}