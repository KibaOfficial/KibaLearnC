#include <stdio.h>

int main() {
    // Ganzzahlen
    int integerNumber = 42;
    char character = 'A';
    long longNumber = 2147483647;
    long long hugeNumber = 1234567890123456789LL;
    unsigned int positiveNumber = 100;
    
    // Gleitkommazahlen
    float piFloat = 3.14159;
    double bigNumber = 1234567890.12345;
    
    // Ausgabe
    printf("Integer: %d\n", integerNumber);
    printf("Character: %c\n", character);
    printf("Long: %ld\n", longNumber);
    printf("Long Long: %lld\n", hugeNumber);
    printf("Unsigned int: %u\n", positiveNumber);
    printf("Float: %f\n", piFloat);
    printf("Double: %lf\n", bigNumber);

    return 0;
}