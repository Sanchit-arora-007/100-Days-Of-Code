#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("Sum of the series up to %d terms: %.2lf\n", n, sum);
    return 0;
}