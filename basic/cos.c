#include<stdio.h>
#include<math.h>
void main()
{
	int a;
    float x,y;
	printf("Enter any angle in degrees \n");
	scanf("%d",&a);
	x=(3.14/180)*a;
	y=cos(x);
	printf("The angle in radian=%f\n",x);
	printf("The value of cos=%f\n",y);	
}