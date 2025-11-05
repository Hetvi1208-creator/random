#include <stdio.h>
int main() {
    float p, r, n;
    printf("Enter P, R, N: ");
    scanf("%f %f %f", &p, &r, &n);
    printf("Interest = %.2f", (p * r * n) / 100);
    return 0;
}
