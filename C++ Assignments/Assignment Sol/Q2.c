#include <stdio.h>

int main() {
    printf("short int: %lu\n", sizeof(short int));
    printf("int: %lu\n", sizeof(int));
    printf("long int: %lu\n", sizeof(long int));
    printf("long long int: %lu\n", sizeof(long long int));
    printf("unsigned int: %lu\n", sizeof(unsigned int));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long double: %lu\n", sizeof(long double));
    printf("char: %lu\n", sizeof(char));

    return 0;
}

/*
On my machine:
int and unsigned int have the same size.
unsigned int does NOT have a different size than int.
*/