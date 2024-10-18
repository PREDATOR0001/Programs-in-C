#include <stdio.h>

double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double base, exponent, result;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    result = power(base, exponent);

    printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}
