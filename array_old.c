#include <stdio.h>
int main()
{
    int num[100], n, i;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nEven number : ");
    for (i = 0; i < n; ++i)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d\t", num[i]);
        }
    }
    printf("\n------------------------------------");
    printf("\nOld number : ");
    for (i = 0; i < n; ++i)
    {
        if (num[i] % 2 != 0)
        {
            printf("%d\t", num[i]);
        }
    }
}
