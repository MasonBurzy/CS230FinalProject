#include <stdio.h>

void print_bin(unsigned char num) {
    printf("0b");

    for (int i = 4; i >= 0; i--) {
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

    print_bin(num);

    return 0;
}