#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    int i, j;
    int total;
    char name[100];
    printf("Enter num : ");
    scanf("%d", &num);
    int score[num][3];

    for (i = 0; i < num; i++)
    {
        total = 0;
        printf("Enter name Student No %d : ", i);
        scanf("%s", name);
        for (j = 0; j < 2; j++)
        {
            printf("Enter score[%d]  : ",j);
            scanf("%d", &score[i][j]);
            total = total + score[i][j];
        }
        score[i][3] = total;
        printf("-------------------------\n");
    }
    printf("No\tName\tTest1\tTest2\tTest3\tTotal\n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", score[i][j]);
        }
        printf("\n");
    }

}