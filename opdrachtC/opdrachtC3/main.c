#include <stdio.h>
#include <math.h>

void abc(double a, double b, double c);
double discriminant(double a, double b, double c);

int main() {
    int num_testcases;
    scanf("%d", &num_testcases);

    for (int i = 0; i < num_testcases; i++) {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        abc(a, b, c);
    }

    return 0;
}

void abc(double a, double b, double c) {
    double disc = discriminant(a, b, c);

    printf("De vergelijking %.4fx^2 + %.4fx + %.4f", a, b, c);

    if (disc < 0) {
        printf(" heeft geen reele oplossingen.\n");
    } else if (disc == 0) {
        double x = -b / (2 * a);
        printf(" heeft een oplossing:\nx = %.4f\n", x);
    } else {
        double x1 = (-b + sqrt(disc)) / (2 * a);
        double x2 = (-b - sqrt(disc)) / (2 * a);
        printf(" heeft twee reele oplossingen:\nx1 = %.4f, x2 = %.4f\n", x1, x2);
    }
}

double discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}