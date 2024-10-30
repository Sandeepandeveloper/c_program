#include<stdio.h>
void main()
{
    int sum = 0, n = 1;
    do
    {
        sum = sum + n * n;  
        n = n + 2;          // Increment n
    }
    while (n <=9);        
    printf("The sum of squares of the first 5 odd natural numbers = %d\n", sum);
}
