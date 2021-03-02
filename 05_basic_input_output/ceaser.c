#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    if (argc == 1) {
        printf("Error : arguments are less or more\n");
        exit(0);
    }

    char str[80], temp;

    int i;

    //Receive more than one words to convert into ceaser cipher
    for (i = 2; i <= argc; i++) {
        strcat(str, argv[i - 1]);
    }

    for(i = 0; str[i] != '\0'; ++i){
		temp = str[i];//Convert each character
		
        //If character is between small a to small z
        //add key to convert (5 for this)
        //and push back to 'a' if it goes above 'z'
		if(temp >= 'a' && temp <= 'z'){
			temp = temp + 5;
			
			if(temp > 'z'){
				temp = temp - 'z' + 'a' - 1;
			}
			
			str[i] = temp;
		}
        //Same for small alphabets,
        //but push back to large 'A' if it goes above 'Z'.
		else if(temp >= 'A' && temp <= 'Z'){
			temp = temp + 5;
			
			if(temp > 'Z'){
				temp = temp - 'Z' + 'A' - 1;
			}
			
			str[i] = temp;
		}
	}

    printf("%s\n", str);

}
