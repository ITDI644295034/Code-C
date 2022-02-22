#include <stdio.h>
int main()
{
    int num, i = 1;
    int min = 999999, max = 0;
    while (i <= 10)
    {
        printf("Enter number %d ",i);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }

        i++;
    }

    printf("\nMaximum is %d\n\n", max);
    printf("Minimam is %d\n\n", min);

    return 0;
}
