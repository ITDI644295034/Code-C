#include <stdio.h>
int main()
{
    int i = 1;
    float num, avg, sum;
    float min = 999999, max = 0;
    while (i <= 10)
    {
        printf(" Enter number %d :  ", i);
        scanf("%f", &num);
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }

        sum += num;
        i++;
    }
    avg = sum / 10;

    printf("\nMaximum is %.2f\n\n", max);
    printf("Minimam is %.2f\n\n", min);
    printf("Avg is %.2f\n\n", avg);

    return 0;
}
