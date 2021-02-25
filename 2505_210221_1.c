#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Error : arguments are less or more\n");
        exit(0);
    }

    char *receive = argv[1]; //receive input from terminal, which is decimal value.
    int deci = atoi(receive); //convert input into int.
    int bin[16] = { 0, }, comp[16] = { 0, }; //save values for binary and its complement
    int num = 0, sav = 0;

    num = deci; //receive decimal value to calculate

    for (int i = 0; i < 16; i++) { //put binary number up to 16
        bin[i] = num % 2; //calculate remainder of dividing it into 2

        //Set content of complement array with number which is not in binary array
        if (bin[i] == 0) {
            comp[i] = 1;
        }
        else {
            comp[i] = 0;
        }

        num = num / 2; //divide num value by 2 to calculate next binary number
    }

    //Add 1 to first bit of complement
    if (comp[0] == 1) {
        comp[0] = 0;
        sav = 1;
    }
    else {
        comp[0] = 1;
    }

    //Round off
    for (int i = 1; i < 16; i++) {
        if (sav == 1 && comp[i] == 1) {
            comp[i] = 0;
        }
        else if (sav == 1 && comp[i] == 0) {
            comp[i] = 1;
            sav = 0;
        }
    }

    printf("Binary : ");

    for (int i = 15; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", bin[i]);
    }

    printf("\n"); //change line

    printf("Complement : ");

    for (int i = 15; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", comp[i]);
    }

    printf("\n"); //change line
}