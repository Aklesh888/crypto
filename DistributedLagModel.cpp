
#include <stdio.h>

int main() {

    float Y_minus_1 = 80;
    float G[] = {20, 25, 30, 35, 40};
    float I, Y, T, C;

    float C_values[5];

    for (int year = 0; year < 5; year++) {
        I = 2 + 0.1 * Y_minus_1;
        Y = 45.45 + 2.27 * (I + G[year]);
        T = 0.2 * Y;
        C = 20 + 0.7 * (Y - T);

        C_values[year] = C;

        Y_minus_1 = Y;
    }

    for (int year = 0; year < 5; year++) {
        printf("Year %d: Consumption is %.2f\n", year + 1, C_values[year]);
    }

    return 0;
}
