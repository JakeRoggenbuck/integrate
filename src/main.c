#include <math.h>
#include <stdio.h>
#define SIZE 10000
#define H 0.0002

void integrate(double (*func)(double)) {
    printf("x,y,Y\n");
    for (int i = -SIZE; i < SIZE; i++) {
        double x = i * H;
        double y = func(x);
        double Y = x * func(x);

        printf("%f,%f,%f\n", x, y, Y);
    }
}

double function(double x) {
    // f(x) = x^3 + 4x + 2
    return (pow(x, 3) + 4 * x) + 2;
}

int main() {

    integrate(function);
    return 0;
}
