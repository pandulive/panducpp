#include <stdio.h>
#include <math.h>  // Required for math functions

int main() {
    double num = 16.0;
    // double M_PI = 3.14159265358979323846;

    printf("Square root of %.2f is: %.2f\n", num, sqrt(num));
    printf("2 raised to the power 3 is: %.2f\n", pow(2, 3));
    printf("Sine of 30 degrees: %.2f\n", sin(30 * M_PI / 180));
    printf("Cosine of 45 degrees: %.2f\n", cos(45 * M_PI / 180));

    return 0;
}
