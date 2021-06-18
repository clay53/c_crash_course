#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int x = 50;
    int y;
    y = 10;

    printf("%s World\n", "Hello"); // %s is string formatter

    printf("The value of x is %d\n", x); // %d is int formatter - similar to rust print!

    printf("X: %d, Y: %d\n", x, y);

    printf("Give me a radius: ");
    int radius;
    scanf("%d", &radius); // address-of-operator (pointer). Noticed a bug: if letters are typed here, skips name input

    printf("You chose the value %d\n", radius);

    printf("Name?: ");
    char name[20]; // char array of 20 characters. '\0' null-terminator (takes final spot in string to know to stop reading - this char array can only handle 19 characters)
    scanf("%19s", name); // specify only 19 characters are available. Does not need & because it's an array (arrays decay to points/references?). Cuts it off if too long

    printf("君の名は: %s\n", name);
    return 0;
}