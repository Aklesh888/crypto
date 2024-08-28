#include <stdio.h>

int main() {
    int n, seed;
    
    printf("Enter the number of random numbers to generate (n): ");
    scanf("%d", &n);
    printf("Enter the seed value: ");
    scanf("%d", &seed);

    float rand_nums[n];

    rand_nums[0] = (float)seed / 10000;
    for (int i = 1; i < n; i++) {
        int square = rand_nums[i-1] * 10000; 
        square = square * square;
        int mid = (square / 100) % 10000; 
        rand_nums[i] = (float)mid / 10000;
    }

    for (int i = 0; i < n; i++) {
        int integer_part = rand_nums[i] * 10000;
        printf("Integer: %d, Float: %f\n", integer_part, rand_nums[i]);
    }

    return 0;
}

