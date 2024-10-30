#include <stdio.h>
void main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    for (int index = 0; index < 6; index++)
    {
        printf("%d ", arr[index]);
    }
    if (arr[2] % 2 == 0)
    {
        printf("The 3rd element (%d) is even\n", arr[2]);
    }
    else
    {
        printf("The 3rd element (%d) is odd\n", arr[2]);
    }
}
