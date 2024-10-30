#include<stdio.h>
#include<string.h>
void main()
{
	int a;
	double b;
	char str[20]; //string declartion
     a=10;
     b=3.7;
     //str="hi"; error
     strcpy(str,"hi");
	printf("%d\n",a);
	printf("%.1lf\n",b);
	printf("%s\n",str);
}
