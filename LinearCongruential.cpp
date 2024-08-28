#include <stdio.h>

int main() {
    unsigned int X0 = 1;
    unsigned int a, c, m = 4967296; 
    int n;

    // Prompt user for inputs
    printf("Enter the number of random numbers to generate (n): ");
    scanf("%d", &n);
    printf("Enter the multiplier (a): ");
    scanf("%u", &a);
    printf("Enter the increment (c): ");
    scanf("%u", &c);

    // Define arrays to store integer and floating-point values
    unsigned int int_rand_nums[n];
    float float_rand_nums[n];

    // Initialize the first value
    int_rand_nums[0] = X0;
    float_rand_nums[0] = (float)X0 / m;

    // Generate random numbers
    for (int i = 1; i < n; i++) {
        X0 = (a * X0 + c) % m;
        int_rand_nums[i] = X0;
        float_rand_nums[i] = (float)X0 / m;
    }

    // Print values
    for (int i = 0; i < n; i++) {
        printf("Integer: %u, Float: %f\n", int_rand_nums[i], float_rand_nums[i]);
    }

    return 0;
}

