#include<stdio.h>
void main()
{
    int sum = 0, n = 1;
    do
    {
        sum = sum + n * n;  
        n = n + 1;          // Increment n
    }
    while (n <= 10);        
    printf("The sum of squares of the first 10 natural numbers = %d\n", sum);
}
