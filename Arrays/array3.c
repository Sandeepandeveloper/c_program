#include <stdio.h>
void main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    printf("Before swapping:\n");
    for (int index = 0; index < 6; index++)
    {
        printf("%d ", arr[index]);
    }
    int swap = arr[1];
    arr[1] = arr[3];
    arr[3] = swap;
    int sum = arr[1] + arr[3];
    printf("After swapping 2nd and 4th elements:\n");
    for (int index = 0; index < 6; index++)
    {
        printf("%d ", arr[index]);
    }
    printf("Sum of 2nd and 4th elements after swapping = %d\n", sum);
}
