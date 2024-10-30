#include<stdio.h>
void main()
{
	double p,r,si;
	int t;
	printf("enter principle rate and time \n");
	scanf("%lf %lf %d",&p,&r,&t);
	si=p*r*t/100;
	printf("prinicple=%lf\n",p);
	printf("rate of interset=%lf\n",r);
	printf("time=%d\n",t);
	printf("interset=%lf\n",si);
}