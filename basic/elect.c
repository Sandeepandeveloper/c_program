#include<stdio.h>
void main()
{
	float u,c=0;
	printf("Enter the units consumed in one month \n");
	scanf("%f",&u);
	if(u>0 && u<=200)
	{
		c=0.5*u;
	}
	else if(u>200 && u<=400)
	{
		c=100+0.65*(u-200);
	}
	else if(u>400 && u<=600)
	{
		c=230+0.8*(u-400);
	}
	else
	{
		c=390+1*(u-600);
	}
	printf("The electricity bill of the month=%5.2f\n",c);
}