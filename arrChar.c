#include <stdio.h>
#include <string.h>

int main()
{
    char msg[100];
    int i = 0, total;
    printf("Please enter massage --> ");
    gets(msg);
    while (i < total)
    {
        total = strlen(msg);
        i++;
    }
    printf("Total charater = %d\n", total);
}
