#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int freq = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > freq)
        {
            freq = count;
            element = a[i];
        }
    }

    printf("Maximum frequency element = %d", element);

    return 0;
}