#include<stdio.h>
#include<stdlib.h>

//declare functions to call
int add(int a, int b);
int subtract(int a, int b);

int main(int argc, char *argv[]) {

    //Check whether enough input received
    if (argc != 3) {
        printf("Two integers to add and subtract\n");
        exit(0);
    }

    //Get two numbers to calculate
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    //Get calculation result
    int add_result = add(num1, num2);
    int subtract_result = subtract(num1, num2);

    printf("add result : %d, subtract result : %d\n", add_result, subtract_result);
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
