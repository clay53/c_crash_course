#include <stdio.h>

void square(int *input)
{
    *input *= *input;
}

void sizeExample(int ages[]) // Points to ages array instead of passing it
{
    printf("memory size of ages = %lu\n", sizeof(ages));
}

int main()
{
    int a = 100;
    int *b = &a; // create integer pointer b, set it to a

    printf("a = %d\n", a);
    printf("*b = %d\n", *b); // *b is "dereferencing" b - getting the value that it points to

    a = 200;

    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    int c = 6000;
    b = &c; // Switch pointer b to point at c

    a = 4000;

    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    int x = 5;
    square(&x);
    printf("%d\n", x);

    int size = 6;
    int ages[] = {2, 123, 343, 45, 332 , 221};

    printf("memory size of ages = %lu\n", sizeof(ages));

    sizeExample(ages);
    return 0;
}