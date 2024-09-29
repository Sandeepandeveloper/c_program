#include<stdio.h>
 void main()
 {
 	int mark1,mark2,mark3,mark4,mark5,total,avg,percent;
 	printf("Enter 5 marks \n");
 	scanf("%d\n %d\n %d\n %d\n %d\n",&mark1,&mark2,&mark3,&mark4,&mark5);
 	total=mark1+mark2+mark3+mark4+mark5;
 	avg=total/5;
    percent=total*100/500;
 	printf("The scored marks=%d\n",total);
 	printf("The average marks=%d\n",avg);
    printf("The percentage scored=%d\n",percent);
  }