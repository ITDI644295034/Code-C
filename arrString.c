#include <stdio.h>

char message[6] = {'S', 'a', 'k', 'a', 'n', '\0'};
int main()
{
    char word[10];
    int i = 0;
    printf("\nmessage = %s\n", message);
    printf("Please enter message --> ");
    gets(word);
    while (word[i] != '\0')
    {
        printf("%c\n", word[i]);
        i++;
    }
}