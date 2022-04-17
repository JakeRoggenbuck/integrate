#include <math.h>
#include <stdio.h>
#define SIZE 1000
#define H 0.001

void derive(double (*func)(double)) {
    printf("x,y,y'\n");
    for (int i = -SIZE; i < SIZE; i++) {
        double x = i * H;
        double k = (func((double)x + H) - func(x)) / H;
        double y = func(x);
        printf("%f,%f,%f\n", x, y, k);
    }
}

double function(double x) {
	// f(x) = x^3 * 4 + 2
	return (pow(x, 3) * 4) + 2;
}

int main() {

    derive(function);
    return 0;
}
