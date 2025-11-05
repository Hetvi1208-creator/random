#include <stdio.h>
int main() {
    float b;
    printf("Enter bytes: ");
    scanf("%f", &b);
    printf("KB = %.2f\n", b / 1024);
    printf("MB = %.2f\n", b / (1024 * 1024));
    printf("GB = %.2f\n", b / (1024 * 1024 * 1024));
    return 0;
}
