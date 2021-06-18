#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    int ages[] = {12, 123, 45, 2334, 22, 344, 21};
    for(int i = 0; i < sizeof(ages)/sizeof(ages[0]); i++)
    {
        printf("ages[%d] = %d\n", i, ages[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    int i = 0;
    while(i < 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    int input;
    do
    {
        printf("Choose a number between 0 and 9: ");
        scanf("%d", &input);
    } while (input < 0 || input > 9);
    
    return 0;
}