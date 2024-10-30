#include<stdio.h>
#include<math.h>
void main()
{
	int a;
    float x,y;
	printf("Enter any angle in degrees \n");
	scanf("%d",&a);
	x=(3.14/180)*a;
	y=sin(x);
	printf("The angle in radian=%f\n",x);
	printf("The value of sin=%f\n",y);	
}