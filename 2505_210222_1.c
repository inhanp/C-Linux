#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {

    //print error if it does not receive all input required
    if (argc != 3) {
        printf("Error : arguments are less or more\n");
        exit(0);
    }

    char *receive = argv[1]; //receive input from terminal, which is decimal value.
    int deci = atoi(receive); //convert input into int.
    int bin_i[16] = { 0, }, bin_r[16] = { 0, }; //initialize arrays to store binary
    int num = 0;

    num = deci; //receive decimal value to calculate

    for (int i = 0; i < 16; i++) { //put binary number up to 16

        bin_i[i] = num % 2; //calculate remainder of dividing it into 2

        num = num / 2; //divide num value by 2 to calculate next binary number
    }

    printf("Original bitwise : ");

    for (int i = 15; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", bin_i[i]);
    }

    printf("\n"); //change line

    num = atoi(argv[2]);

    // Shift received bits to left
    for (int i = 15; i >= num; i--) {
        bin_r[i] = bin_i[i - num];
    }

    printf("Result of shift left : ");

    for (int i = 15; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", bin_r[i]);
    }

    printf("\n"); //change line

    memset(bin_r, 0, 16); //reset bin_r

    //Shift received bits to right
    for (int i = 0; i < 16 - num; i++) {
        bin_r[i] = bin_i[i + num];
    }

    printf("Result of shift right : ");

    for (int i = 15; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", bin_r[i]);
    }

    printf("\n"); //change line
}