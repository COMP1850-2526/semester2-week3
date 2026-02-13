
/*
 *  All char variables are also integers
 *  Some integers are also characters
 */

#include <stdio.h>

int main( void ) {
    // Existing types
    char c = 'a';
    int k = 95;

    // New requested types
    short s = 32767;          // Typically 2 bytes
    long l = 1234567890L;     // Typically 4 or 8 bytes
    double d = 3.1415926535;  // 8 bytes (high precision)

    printf("Display short: %hd\n", s);
    printf("Display long: %ld\n", l);
    
    // Double uses %lf (long float)
    printf("Display double: %lf\n", d);
    
    // You can also control the precision of the double
    printf("Display double (10 decimal places): %.10lf\n", d);

    return 0;
}