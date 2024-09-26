#include<stdio.h>
void main()
{
	int l,w,p,ar;
	printf("enter a length \n");
	scanf("%d",&l);
	printf("enter a width \n");
	scanf("%d",&w);
	p=2*(l+w);
	ar=l*w;
	printf("length=%d\n",l);
	printf("width=%d\n",w);
	printf("perimeter=%d\n",p);
	printf("area=%d\n",ar);
}