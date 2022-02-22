#include <stdio.h>
int main()
{
    int num[100], n, i, count, flag;
    printf("Enter Element : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Enter a number to serach in Array: ");
    scanf("%d", &count);

    for (i = 0; i < n; i++)
    {
        if (num[i] == count)
        {
            printf("\nfound number %d at position %d\n", count, i+1);
            return 0;
        }
    }
    printf("\n%d Not Found", count);
}
