#include <stdio.h>

int main()
{
    int a[100], n, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}
