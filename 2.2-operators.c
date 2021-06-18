#include <stdio.h>

int main()
{
    printf("PEMDAS exists\n");
    int x = 2*(3+3);
    int y = (2 * 3) + 3;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("Modulus operator:\n");
    int c = 10 % 3;
    printf("10 %% 3  = %d\n", c);

    printf("unary minus:\n");
    int a = 5;
    int b = -a;
    printf("b = %d\n", b);
    printf("a = %d\n", a);

    printf("Post increment:\n");
    a = 5;
    b = 5;
    b = a++;
    printf("b = %d\n", b);
    printf("a = %d\n", a);

    b = 5;
    a = 5;
    b = ++a;

    printf("Pre increment:\n");
    printf("b = %d\n", b);
    printf("a = %d\n", a);

    printf("Assignment operators:\n");
    a = 5;
    b = 5;

    b += a;
    printf("b += a = %d\n", b);
    a *= 30;
    printf("a *= 30 = %d\n", a);
    a %= 140;
    printf("a %%= 140 = %d\n", a);
}