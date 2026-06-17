
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int L, S;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    L = S = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > L)
            L = a[i];

        if(a[i] < S)
            S= a[i];
    }

    printf("L = %d\n", L);
    printf("S = %d", S);

    return 0;
}