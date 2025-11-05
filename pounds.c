#include <stdio.h>
int main() {
    float d;
    printf("Enter dollars: ");
    scanf("%f", &d);
    printf("Pounds = %.2f", (d * 48) / 70);
    return 0;
}
