#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Get Greatest common divisor of two received inputs
 * 
 * @param N First number to get GCD
 * @param M Second number to get GCD
 * @return int GCD of two numbers
 */
int GCD(int N, int M) {
    printf("N = %5d and M = %5d\n", N, M);

    //GCD becomes N if M is 0
    if (M == 0)
        return N;

    //continue it until one of it becomes 0
    return GCD(M, N % M);
}

int main(int argc, char** argv) {

    //check input error
    if (argc != 3) {
        printf("gcd X Y\n");
        return 1;
    }

    //Receive second and third input as numbers
    int X = atoi(argv[1]);
    int Y = atoi(argv[2]);

    printf("GCD is %d\n", GCD(X, Y));

    return 0;
}