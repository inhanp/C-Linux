#include<stdio.h>

int fileScope = 0; //can be referred from any function within file

void temp() {
    int fileScope = 1; //block scope. can only be referred within block

    printf("fileScope : %d\n", fileScope);
}

int main(int argc, char** argv) {
    int blockScope = 0;
    int i = 5;

    temp();
    for (i; i > blockScope; i--) {
        int internalFor = 0;

        printf("InternalFor : %d\n", internalFor);
        printf("fileScope : %d\n", fileScope);
    }
    temp();
}
