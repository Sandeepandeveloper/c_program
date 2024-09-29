#include<stdio.h>
 void main()
 {
   int h,m,s;
   printf("Enter a time in seconds \n");
   scanf("%d",&s);
   h=s/3600;
   m=s/60;
   printf("The time in hour=%d\n",h);
   printf("The time in minutes=%d\n",m);
 }  