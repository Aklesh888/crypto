
#include <stdio.h>

int main() {
    double lambda = 1.0 / 10; 
    float mu = 1.0 / 5; 


    float rho = lambda / mu; 

    float P0 = 1 - rho;

    float L = rho / (1 - rho);

    float W = 1 / (mu - lambda);

    // Output the results
    printf("1. Probability that a customer will not have to wait at the counter: %.2f\n", P0);
    printf("2. Expected number of customers in the bank: %.2f\n", L);
    printf("3. Time a customer can expect to spend in the bank: %.2f minutes\n", W);

    return 0;
}
