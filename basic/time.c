#include <stdio.h>
 void main() 
 {
   int s, h, m, r_s;
   printf("Enter the number of seconds \n");
   scanf("%d", &s);
   h = s / 3600;         
   m = (s % 3600) / 60;   
   r_s = (s % 60);
   printf("%d seconds is equal to %d hours, %d minutes, and %d seconds\n", 
            s, h, m, r_s);
}