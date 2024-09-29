#include<stdio.h>
int main()
{
	int C,F;
	printf("enter a temperature in Centigrade\n");
	scanf("%d",&C);
	F=(C*9/5)+32;
	printf("Centigrade=%d\n",C);
	printf("Farhenheit=%d\n",F);
}