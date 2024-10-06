#include<stdio.h>
#include<math.h>
void main()
{
	int a;
	float x,y;
	printf("Enter an angle in degrees which is multiple of 10\n");
	scanf("%d",&a);
	if(a>=0 && a<=180 && a%10==0)
	{
	   x=(3.14*a)/180;
	   y=sin(x);
	   printf("The angle in radian=%f\n",x);
	   printf("The value of sin=%f\n",y);
	}
	else
	{
	   printf("Enter a valid input");
	}
	
}