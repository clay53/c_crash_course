#include <stdio.h>
#include <stdlib.h> // for memory functions
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[30];
    int age;
    bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified)
{
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
}

int main()
{
    int size;
    printf("Yo, how many int elements come one: ");
    scanf("%d", &size);

    int *arr = malloc(4 * size); // Could be zero if not enough memory available

    if(arr == 0)
    {
        printf("Uh oh, bad pointy!!!\n");
        return -1;
    } else
    {
        printf("You're good bud.\n");
    }

    printf("But, what're they ???\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Ok, this is what I got:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr); // Trash it

    user *me = createUser("Clayton Hickey", 16, false);
    
    printf("%s is %d years old!!\n", me->name, me->age);
    free(me);

    return 0;
}