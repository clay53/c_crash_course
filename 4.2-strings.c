#include <stdio.h>
#include <string.h>

int main()
{
    printf("君の名前は何ですか？");
    char name[20]; // '\0' - null terminator at end
    scanf("%19s", name);

    int letter = 0;
    while(name[letter] != '\0')
    {
        letter++;
    }

    printf("Size of name is %d\n", letter);
    printf("Size of name is %lu\n", strlen(name));

    if(strcmp(name, "Clayton") == 0)
    {
        printf("You get access!\n");
    }

    char copy[20];
    strcpy(copy, name);
    printf("Copy of name is %s\n", copy);

    char lastName[] = "Hickey";
    strcat(copy, lastName);
    printf("Full name: %s\n", copy);
    return 0;
}