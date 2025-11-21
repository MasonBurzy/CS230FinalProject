#include <stdio.h>

unsigned char convert_num(unsigned char num) {
    if (num > 9) {
        switch(num) {
            case 'A': num = 10;
            case 'B': num = 11;
            case 'C': num = 12;
            case 'D': num = 13;
            case 'E': num = 14;
            case 'F': num = 15;
        }
    }

    printf("%hhu\n", num);
    return num;
}

void print_bin(unsigned char num) {
    for (int i = 3; i >= 0; i--) {
        if (num & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }

    printf("\n");
}

int main() {
    unsigned char num;

    printf("Enter Hexademical Digit: ");
    scanf("%hhu", &num);

    num = convert_num(num);

    print_bin(num);

    return 0;
}