#include <stdio.h>
#include <ctype.h>

unsigned char convert_num(char input) {
    unsigned char num;
    switch(input) {
        case 'a': 
            num = 10;
            break;
        case 'b': 
            num = 11;
            break;
        case 'c': 
            num = 12;
            break;
        case 'd': 
            num = 13;
            break;
        case 'e': 
            num = 14;
            break;
        case 'f': 
            num = 15;
            break;
        default:
            num = input - 48;
    }

    return num;
}

void print_bin(unsigned char num) {
    printf("Binary: ");
    for (int i = 3; i >= 0; i--) {
        if (num & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }

    printf("\n\n");
}

int main() {
    char input;
    printf("Enter Hexademical Digit: ");
    scanf(" %c", &input);

    while (tolower(input) != 'x') {
        unsigned char num = convert_num(tolower(input));
        print_bin(num);

        printf("Enter Hexademical Digit: ");
        scanf(" %c", &input);
    }

    printf("You have exited!\n");

    return 0;
}