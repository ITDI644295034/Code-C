#include <stdio.h>

int main()
{
    int i;
    float number[3] = {10.3, 20.1, 30.6};
    for (i = 0; i < 3; i++)
    {
        printf("number[%d] = %.2f\n", i+1, number[i]);
    }
}
