#include <stdio.h>
#include "5.2-libraries.h"

/*
Compile Instuctions

Long:
gcc -c 5.2-libraries.c
gcc -c 5.2-libraries-main.c
gcc 5.2-libraries-main.o 5.2-libraries.o

Short: gcc 5.2-libraries-main.c 5.2-libraries.c
*/

int main()
{
    int x = 5;
    int xSquared = square(x);
    printf("%d\n", xSquared);

    int xTo5 = power(x, 20);
    printf("%d\n", xTo5);

    int recursive = recursivePower(x, 5);
    printf("%d\n", recursive);

    changeVal(&x);
    printf("%d\n", x);

    int size = 7;
    int ages[] = {123, 344, 44, 32, 45, 6453, 23};
    printf("%d\n", oldest(ages, size));

    return 0;
}