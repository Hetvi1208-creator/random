#include <stdio.h>
int main() {
    float h, l;
    printf("Enter height & base: ");
    scanf("%f %f", &h, &l);
    printf("Area = %.2f", (h * l) / 2);
    return 0;
}
