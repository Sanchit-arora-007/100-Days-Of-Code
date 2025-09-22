#include <stdio.h>
int main() {
    long num;
    int digitCount[10] = {0};
    int digit, maxDigit = 0, maxCount = 0;
    printf("Enter an integer: ");
    scanf("%ld", &num);
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }
    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);
    return 0;
}