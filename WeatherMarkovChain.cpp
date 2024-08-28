
#include <stdio.h>

int main() {

    float transition[2][2] = {
        {0.9, 0.1},
        {0.5, 0.5}
    };


    float state[2] = {1.0, 0.0};


    float next_state[2];


    next_state[0] = state[0] * transition[0][0] + state[1] * transition[1][0];
    next_state[1] = state[0] * transition[0][1] + state[1] * transition[1][1];


    printf("Probability of sunny next day: %.2f\n", next_state[0]);
    printf("Probability of rainy next day: %.2f\n", next_state[1]);

    return 0;
}
