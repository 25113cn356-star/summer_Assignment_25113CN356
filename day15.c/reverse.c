#include <stdio.h>

int main()
{
    int a[50], n, i;

    printf(" number of elements: ");
    scanf("%d", &n);

    printf(" array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Reverse array:\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}