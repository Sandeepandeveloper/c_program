#include<stdio.h>
void main()
{
	int marks,index;
	printf("Enter your marks\n");
	scanf("%d",&marks);
    index=marks/10;
    switch(index)
    {
    	case 10:
    	case 9:
    	case 8:
    	printf("O Grade\n");
    	break;
    	case 7:
    	case 6:
    	printf("A Grade\n");
    	break;
    	case 5:
    	printf("B Grade\n");
    	break;
    	case 4:
    	printf("C Grade\n");
    	break;
    	default:
    	printf("Fail\n");
    	break;
    }
}