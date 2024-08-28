#include <stdio.h>

#define N 100

int main() {
    unsigned int a, m, X0;

    printf("Enter the multiplier (a): ");
    scanf("%u", &a);
    printf("Enter the modulus (m): ");
    scanf("%u", &m);
    printf("Enter the initial seed value (X0): ");
    scanf("%u", &X0);

    float rand_nums[N];

    unsigned int X = X0;
    for (int i = 0; i < N; i++) {
        X = (a * X) % m;
        rand_nums[i] = (float)X / m;
    }

    for (int i = 0; i < N; i++) {
        printf("Integer: %u, Float: %f\n", (unsigned int)(rand_nums[i] * m), rand_nums[i]);
    }

    return 0;
}

