#include<stdio.h>
void main()
{
	int arr[6]={10,20,30,40,50,60};
	printf("Before swapping:\n");
	printf("First element=%d\n",arr[0]);
	printf("Last element=%d\n",arr[5]);
	int swap=arr[0];
	arr[0]=arr[5];
	arr[5]=swap;
	printf("After swapping:\n");
	for(int index=0;index<6;index++)
	{
		printf("%d\n",arr[index]);
	}
}