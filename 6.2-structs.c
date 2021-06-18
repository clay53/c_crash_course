#include <stdio.h>

typedef struct // two ways of declaring
{
    int length;
    int width;
} rectangle;

struct position // two ways of declaring
{
    int x;
    int y;
};

typedef struct buildingPlan
{
    char owner[30];
    rectangle rectangle;
    struct position position; // 2econd method requires struct
} buildingPlan;

int main()
{
    rectangle myRectangle = {5, 10};
    printf("Length: %d, Width: %d\n", myRectangle.length, myRectangle.width);

    buildingPlan myHouse = {"Clayton Hickey", {5, 10}, {2, 1}};
    printf("The house at %d %d (size %dx%d) is owned by %s\n",
        myHouse.position.x,
        myHouse.position.y,
        myHouse.rectangle.length,
        myHouse.rectangle.width,
        myHouse.owner
    );

    int size = 3;
    struct position path[] = {{0, 1}, {1, 2}, {3, 4}};

    for(int i = 0; i < size; i++)
    {
        printf("%d %d\n", path[i].x, path[i].y);
    }

    buildingPlan *structPointer = &myHouse;
    printf("Position x: %d\n", structPointer->position.x); // must use an arrow

    return 0;
}