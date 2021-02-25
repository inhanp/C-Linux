#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    char *receive = argv[1]; //receive input from terminal, which is decimal value.
    int deci = atoi(receive); //convert input into int.
    int bin[16], oct[10]; //save value for each part of binary and oct
    char hex[5]; //save value for each part of hexadecimal
    int num = 0;
    
    num = deci; //receive decimal value to calculate

    for (int i = 0; i < 16; i++) { //put binary number up to 16
        bin[i] = num % 2; //calculate remainder of dividing it into 2
        num = num / 2; //divide num value by 2 to calculate next binary number
    }

    printf("Binary : ");

    for (int i = 15; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", bin[i]);
    }

    printf("\n"); //change line

    num = deci; //receive decimal value again to calculate

    for (int i = 0; i < 10; i++) { //put octa number up to 10
        oct[i] = num % 8; //calculate remainder of dividing into 8
        num = num / 8; //divide num value by 8 to calculate next octa number
    }

    printf("Octa : ");

    for (int i = 9; i >= 0; i--) { //place each content in reverse order, so content in first of array will be placed at last
        printf("%d", oct[i]);
    }

    printf("\n");//change line

    num = deci; //receive decimal value again to calculate

    for (int i = 0; i < 5; i++) { //put hexa number up to 5

        int result = num % 16; //calculate remainder of dividing into 16

        switch(result) {
            case 10:
                hex[i] = 'A';
                break;
            case 11:
                hex[i] = 'B';
                break;
            case 12:
                hex[i] = 'C';
                break;
            case 13:
                hex[i] = 'D';
                break;
            case 14:
                hex[i] = 'E';
                break;
            case 15:
                hex[i] = 'F';
                break;
            default:
                hex[i] = result + '0';
        }

        num = num / 16;//divide num value by 16 to calculate next hexa number
    }

    printf("Hexadecimal : ");

    for (int i = 4; i >= 0; i--) {//place each content in reverse order, so content in first of array will be placed at last
        printf("%c", hex[i]);
    }

    printf("\n");

    printf("Decimal : %d\n", deci);//print original decimal number

    return 0;
}