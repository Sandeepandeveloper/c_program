#include<stdio.h>
void main()
{
	int s;
	float t=0;
	printf("Enter annual of salary of the employee\n");
	scanf("%d",&s);
	if(s>0 && s<=100000)
	    t=0;
	else if(s>100000 && s<=500000)
 		t=(s-100000)*0.1;
	else if(s>500000 && s<=800000)
		t=40000+(s-500000)*0.15;
	else if(s>800000 && s<=1200000)	
		t=85000+(s-800000)*0.20;
	else
		t=165000+(s-1200000)*0.30;
	printf("The tax to be paid=%.2f\n",t);
}