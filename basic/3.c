#include<stdio.h>
#include<string.h>
void main()
{
	int a=10;
	double b=3.7;
	char str[20]="hi";
     a=20;
     b=5.4;
     strcpy(str,"bye");
	printf("%d\n",a);
	printf("%.1lf\n",b);
	printf("%s\n",str);
}