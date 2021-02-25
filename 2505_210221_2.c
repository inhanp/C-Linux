#include<stdio.h>

int main(int argc, char *argv[]) {
    char *c = argv[1];

    //print received character and its ASCII number
    printf("ASCII number of %c is %d\n", *c, *c);
}