#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char **argv) {

    if (argc != 2) {
        printf("Enter string\n");
        exit(0);
    }

    char input_memcpy[20], input_strcpy[20], input_strncpy[20];
    int len_memcpy, len_strcpy, len_strncpy;

    memcpy(input_memcpy, argv[1], 7);
    len_memcpy = strlen(input_memcpy);

    strcpy(input_strcpy, argv[1]);
    len_strcpy = strlen(input_strcpy);

    strncpy(input_strncpy, argv[1], 9);
    len_strncpy = strlen(input_strncpy);

    printf("%s : %d\n", input_memcpy, len_memcpy);
    printf("%s : %d\n", input_strcpy, len_strcpy);
    printf("%s : %d\n", input_strncpy, len_strncpy);

    strcat(input_strcpy, input_strcpy);
    printf("%s : %d\n", input_strcpy, strlen(input_strcpy));

    strncat(input_strncpy, input_strncpy, 5);
    printf("%s : %d\n", input_strncpy, strlen(input_strncpy));

    printf("%d\n", strcmp(input_strcpy, input_strncpy));
    printf("%d\n", strncmp(input_strcpy, input_strncpy, 10));
}