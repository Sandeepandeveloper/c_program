#include<stdio.h>
void main()
{
	float i,t=0;
	printf("Enter your monthly income\n");
	scanf("%f",&i);
	if(i<=200000)
	t=0;
	else if(i>200000 && i<=500000)
	t=0.1*(i-200000);
	else if(i>500000 && i<=1000000)
	t=30000+0.12*(i-1000000);
	else if(i>1000000 && i<=2000000)
	t=90000+0.15*(i-2000000);
	else
	t=225000+0.25*(i-2000000);
	printf("The income tax=%0.2f\n",t);
}