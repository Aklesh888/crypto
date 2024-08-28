#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int circle_points = 0;
    float x, y;
    float pi;

    printf("Enter the number of points to generate (n): ");
    scanf("%d", &n);

    srand(time(0));

    for (int i = 0; i < n; i++) {
        x = (float)rand() / RAND_MAX;
        y = (float)rand() / RAND_MAX;
        
        if (x * x + y * y <= 1) {
            circle_points++;
        }
    }

    pi = 4.0 * circle_points / n;

    printf("Estimated value of PI: %.5f\n", pi);

    return 0;
}

