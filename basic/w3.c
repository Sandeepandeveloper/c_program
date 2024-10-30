#include<stdio.h>
void main()
{
    int sum = 0, n = 1;
    while (n <= 10)
    {
        sum = sum + n * n;
        n = n + 1;
    }
    printf("The sum of squares of the first 10 natural numbers = %d\n", sum);
}
