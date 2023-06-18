 level 1 ques 2
#include <stdio.h>

void printBits(int num) {
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}
