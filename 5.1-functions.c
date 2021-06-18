#include <stdio.h>

int square(int input)
{
    return input * input;
}

int cube (int input)
{
    int x = input; // scopey stuff woww...
    return x * x * x;
}

int power(int input, int exponent)
{
    int total = 1;
    for(int i = 0; i < exponent; i++)
    {
        total *= input;
    }
    return total;
}

int recursivePower(int input, int exponent)
{
    if (exponent < 1) {
        return 1;
    }
    return input * recursivePower(input, exponent-1);
}

void changeVal(int *input)
{
    *input = 900000;
}

int oldest(int ages[], int size)
{
    int oldest = ages[0];
    for(int i = 1; i < size; i++)
    {
        if (ages[i] > oldest) oldest = ages[i];
    }
    return oldest;
}

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