#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    //Initialize two boolean values
    bool first = false;
    bool second = false;

    //Receive 0 or 1 from terminal
    first = atoi(argv[1]);
    second = atoi(argv[2]);

    //Get not value of A
    printf("A  NOT A\n");
    printf("%d   %d\n", first, !first);

    //Get A AND B
    printf("A  B  A AND B\n");
    printf("%d   %d   %d\n", first, second, first&second);

    //Get A OR B
    printf("A  B  A OR B\n");
    printf("%d   %d   %d\n", first, second, first|second);

    //Get A NAND B
    printf("A  B  A NAND B\n");
    printf("%d   %d   %d\n", first, second, !(first&second));

    //Get A XOR B
    printf("A  B  A XOR B\n");
    printf("%d   %d   %d\n", first, second, (first&!second) | (!first&second));

    //Get A NOR B
    printf("A  B  A NOR B\n");
    printf("%d   %d   %d\n", first, second, !(first|second));

    //Get A XNOR B
    printf("A  B  A XNOR B\n");
    printf("%d   %d   %d\n", first, second, !(first|second) | (first&second));
}
