#include<stdio.h>
#include<stdint.h>

int main(int argc, char** argv) {
    
    if (argc != 3) {
        printf("Two integers to swap\n");
        exit(0);
    }

    int32_t x = atoi(argv[1]);
    int32_t y = atoi(argv[2]);

    printf("X : %d Y : %d\n",x ,y);

    swap(&x, &y);

    printf("X : %d Y : %d\n",x ,y);

    return 0;
}

void swap(int32_t* num1, int32_t* num2) {
    int32_t temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
