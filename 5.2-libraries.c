#include "5.2-libraries.h"

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