#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    
    double b = 10.5; // 64 bit
    printf("%lu\n", sizeof(b)); // Need to use ulong formatter

    float c = 10.5; // 32 bit
    printf("%lu\n", sizeof(c));

    char d  = 'a';
    char e[] = "char array";
    bool f = false;

    int zero = 0.99999999999999999;
    printf("zero is %d\n", zero);

    int slices = 17;
    int people = 2;
    double slicesPerPerson = slices / people; // 8!!! NOT RIGHT :(((
    printf("%lf\n", slicesPerPerson);
    slicesPerPerson = (double) /* urinary - first */ slices / people;
    printf("%lf\n", slicesPerPerson);

    double test1 = 25/2*2; // 24.0
    double test2 = 25/2*2.0; // STILL 24.0 - typing follows order of ops
    double test3 = 25.0/2*2.0; // 25.0
    double test4 = (double) 25/2*2.0; // 25.0

    printf("%lf\n", test1);
    printf("%lf\n", test2);
    printf("%lf\n", test3);
    printf("%lf\n", test4);

    return 0;
}