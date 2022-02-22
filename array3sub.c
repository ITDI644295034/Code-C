#include <stdio.h>
#include <string.h>

int main()
{
    int num, i, j;
    char name[100];
    printf("Enter num of student : ");
    scanf("%d", &num);
    int score[num][4];
    int total;

    for (i = 0; i < num; i++)
    {
        total = 0;
        printf("Enter name Student No %d : ", i + 1);
        scanf("%s", &name[i]);

            for (j = 0; j < 3; j++)
        {
            printf("Enter test No [%d] : ", j + 1);
            scanf("%d", &score[i][j]);
            total = total + score[i][j];
        }
        score[i][3] = total;
        printf("-------------------------\n");
    }

    printf("No\tName\tTest1\tTest2\tTest3\tTotal\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", i + 1);
        printf("%c\t",name[i]);
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", score[i][j]);
        }
        printf("\n");
    }
}