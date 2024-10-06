#include<stdio.h>
#include<math.h>
void main()
{
	float l,b,d;
	printf("Enter a length\n");
	scanf("%f",&l);
	printf("Enter a breadth\n");
	scanf("%f",&b);
	d=sqrt((l*l)+(b*b));
	printf("The length of the diagonal=%f\n",d);
}